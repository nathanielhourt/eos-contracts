set(WASM_TOOLCHAIN FALSE)

set(WASM_LLVM_CONFIG "$ENV{WASM_LLVM_CONFIG}" CACHE FILEPATH "Path to wasm llvm-config binary")

if( NOT "${WASM_LLVM_CONFIG}" STREQUAL "" )

  execute_process(
    COMMAND ${WASM_LLVM_CONFIG} --bindir
    RESULT_VARIABLE WASM_LLVM_CONFIG_OK
    OUTPUT_VARIABLE WASM_LLVM_BIN
  )

  if("${WASM_LLVM_CONFIG_OK}" STREQUAL "0")
    string(STRIP "${WASM_LLVM_BIN}" WASM_LLVM_BIN)
    set(WASM_CLANG ${WASM_LLVM_BIN}/clang CACHE INTERNAL "Path to wasm clang binary")
    set(WASM_LLC ${WASM_LLVM_BIN}/llc CACHE INTERNAL "Path to wasm llc binary")
    set(WASM_LLVM_LINK ${WASM_LLVM_BIN}/llvm-link CACHE INTERNAL "Path to wasm llvm-link binary")
  endif()

else()
  set(WASM_CLANG $ENV{WASM_CLANG} CACHE FILEPATH "Path to wasm clang binary")
  set(WASM_LLC $ENV{WASM_LLC} CACHE FILEPATH "Path to wasm llc binary")
  set(WASM_LLVM_LINK $ENV{WASM_LLVM_LINK} CACHE FILEPATH "Path to wasm llvm-link binary")
endif()

set(S2WASM $ENV{S2WASM} CACHE FILEPATH "Path to s2wasm binary")

# TODO: Check if compiler is able to generate wasm32
if( NOT ("${WASM_CLANG}" STREQUAL "" OR "${WASM_LLC}" STREQUAL "" OR "${WASM_LLVM_LINK}" STREQUAL "") )
  set(WASM_TOOLCHAIN TRUE)
  MESSAGE(STATUS "Found WASM toolchain:")
  MESSAGE(STATUS "  clang: ${WASM_CLANG}")
  MESSAGE(STATUS "  llc: ${WASM_LLC}")
  MESSAGE(STATUS "  llvm-link: ${WASM_LLVM_LINK}")
else()
  MESSAGE(FATAL_ERROR "Could not find WASM toolchain. Try setting WASM_LLMV_CONFIG (env or cmake variable) with the path to the wasm toolchain llvm-config")
endif()

if( NOT ("${S2WASM}" STREQUAL "") )
  MESSAGE(STATUS "Found s2wasm: ${S2WASM}")
else()
  MESSAGE(FATAL_ERROR "Could not find s2wasm. Try setting S2WASM (env or cmake variable) with the path to the s2wasm binary")
endif()

macro(add_wast_target target SOURCE_FILES INCLUDE_FOLDERS DESTINATION_FOLDER)

  set(outfiles "")
  foreach(srcfile ${SOURCE_FILES})
    
    get_filename_component(outfile ${srcfile} NAME)
    get_filename_component(infile ${srcfile} ABSOLUTE)

    set(outfile "${DESTINATION_FOLDER}/${outfile}")
    set(outtarget "${DESTINATION_FOLDER}/${target}")

    # -ffreestanding
    #   Assert that compilation targets a freestanding environment.
    #   This implies -fno-builtin. A freestanding environment is one in which the standard library may not exist, and program startup may not necessarily be at main.
    #   The most obvious example is an OS kernel.

    # -nostdlib
    #   Do not use the standard system startup files or libraries when linking.
    #   No startup files and only the libraries you specify are passed to the linker, and options specifying linkage of the system libraries, such as -static-libgcc or -shared-libgcc, are ignored.
    #   The compiler may generate calls to memcmp, memset, memcpy and memmove.
    #   These entries are usually resolved by entries in libc. These entry points should be supplied through some other mechanism when this option is specified.

    # -fno-threadsafe-statics
    #   Do not emit the extra code to use the routines specified in the C++ ABI for thread-safe initialization of local statics.
    #   You can use this option to reduce code size slightly in code that doesn’t need to be thread-safe.

    # -fno-rtti
    #   Disable generation of information about every class with virtual functions for use by the C++ run-time type identification features (dynamic_cast and typeid).

    # -fno-exceptions
    #   Disable the generation of extra code needed to propagate exceptions

    add_custom_command(OUTPUT ${outfile}.bc
      DEPENDS ${infile}
      COMMAND ${WASM_CLANG} -emit-llvm -O3 --std=c++14 --target=wasm32 -ffreestanding -nostdlib -fno-threadsafe-statics -fno-rtti -fno-exceptions -I ${INCLUDE_FOLDERS} -c ${infile} -o ${outfile}.bc
      IMPLICIT_DEPENDS CXX ${infile}
      COMMENT "Building LLVM bitcode ${outfile}.bc"
      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
      VERBATIM
    )
    set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES ${outfile}.bc)

    list(APPEND outfiles ${outfile}.bc)

  endforeach(srcfile)

  add_custom_command(OUTPUT ${outtarget}.bc
    DEPENDS ${outfiles}
    COMMAND ${WASM_LLVM_LINK} -o ${outtarget}.bc ${outfiles}
    COMMENT "Linking LLVM bitcode ${target}.bc"
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
  )
  set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES ${outtarget}.bc)

  add_custom_command(OUTPUT ${outtarget}.s
    DEPENDS ${outtarget}.bc
    COMMAND ${WASM_LLC} -asm-verbose=false -o ${outtarget}.s ${outtarget}.bc
    COMMENT "Generating textual assembly ${target}.s"
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
  )
  set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES ${outtarget}.s)

  add_custom_command(OUTPUT ${outtarget}.wast
    DEPENDS "${outtarget}.s"
    COMMAND ${S2WASM} -o ${outtarget}.wast -s 1024 "${outtarget}.s"
    COMMENT "Generating WAST ${target}.wast"
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
  )
  set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES ${outtarget}.wast)

  add_custom_command(OUTPUT ${DESTINATION_FOLDER}/${target}.wast.hpp
    DEPENDS ${DESTINATION_FOLDER}/${target}.wast
    COMMAND echo "const char* ${target}_wast = R\"=====("  > ${DESTINATION_FOLDER}/${target}.wast.hpp
    COMMAND cat ${DESTINATION_FOLDER}/${target}.wast >> ${DESTINATION_FOLDER}/${target}.wast.hpp
    COMMAND echo ")=====\";"  >> ${DESTINATION_FOLDER}/${target}.wast.hpp
    COMMENT "Generating ${target}.wast.hpp"
    VERBATIM
  )

  add_custom_target(${target} ALL DEPENDS ${outtarget}.wast.hpp)
  set_property(TARGET ${target} PROPERTY INCLUDE_DIRECTORIES ${INCLUDE_FOLDERS})


endmacro(add_wast_target)

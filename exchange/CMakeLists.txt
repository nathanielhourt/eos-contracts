file(GLOB SOURCE_FILES "*.cpp")
add_wast_target(exchange "${SOURCE_FILES}" "${CONTRACT_INCLUDE_PATHS}" ${CMAKE_CURRENT_BINARY_DIR})
add_dependencies( exchange currency )

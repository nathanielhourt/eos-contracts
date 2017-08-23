cmake_minimum_required(VERSION 3.9)

include_directories( "${CMAKE_CURRENT_SOURCE_DIR}" )
list( APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules" )
include(wasm)

set( CONTRACT_INCLUDE_PATHS "${CMAKE_CURRENT_SOURCE_DIR}" )

add_subdirectory(currency)
add_subdirectory(exchange)


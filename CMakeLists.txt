cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(struct_pack CXX)

add_library(struct_pack INTERFACE)
target_include_directories(struct_pack INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

option(STRUCT_PACK_ENABLE_EXAMPLES "Build the exmples" ON)
if (${STRUCT_PACK_ENABLE_EXAMPLES})
    add_subdirectory(examples)
endif()

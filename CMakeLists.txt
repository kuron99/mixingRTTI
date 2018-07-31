cmake_minimum_required(VERSION 3.10)
project(tryLLVM)

set(CMAKE_CXX_STANDARD 14)

add_executable(tryLLVM main.cpp)

add_library(C1 C1.h C1.cpp)
add_library(Client client.h client.cpp)

target_link_libraries(tryLLVM PRIVATE Client)
target_link_libraries(Client PRIVATE C1)
set_target_properties(tryLLVM PROPERTIES COMPILE_FLAGS "-frtti")
set_target_properties(Client PROPERTIES COMPILE_FLAGS "-fno-rtti")
set_target_properties(C1 PROPERTIES COMPILE_FLAGS "-fno-rtti")

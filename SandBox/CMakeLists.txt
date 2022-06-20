cmake_minimum_required(VERSION 3.22)
project(SandBox)

set(CMAKE_CXX_STANDARD 23)

add_executable(SandBox SandboxApp.cpp)

target_link_libraries(SandBox PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../Frenzy/build/libFrenzy.dylib)
include_directories("../Frenzy/src" "../Frenzy/vendor/spdlog/include")




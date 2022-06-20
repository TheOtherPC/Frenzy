cmake_minimum_required(VERSION 3.22)
project(Frenzy)

set(CMAKE_CXX_STANDARD 23)

add_library(Frenzy SHARED  src/Frenzy.h src/Frenzy/Application.cpp src/Frenzy/Application.h src/Frenzy/EntryPoint.h src/Frenzy/Log.cpp src/Frenzy/Log.h)

include_directories(vendor/spdlog/include)

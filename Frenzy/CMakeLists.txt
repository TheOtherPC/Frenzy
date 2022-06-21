cmake_minimum_required(VERSION 3.22)
project(Frenzy)

set(CMAKE_CXX_STANDARD 23)

add_library(Frenzy SHARED  src/Frenzy.h src/Frenzy/Application.cpp src/Frenzy/Application.h src/Frenzy/EntryPoint.h src/Frenzy/Log.cpp src/Frenzy/Log.h src/Frenzy/Events/Event.h src/Frenzy/Events/ApplicationEvent.h src/Frenzy/Events/KeyEvent.h src/Frenzy/Events/MouseEvent.h src/Frenzy/Core.h)


include_directories(vendor/spdlog/include src)

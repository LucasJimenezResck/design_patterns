cmake_minimum_required(VERSION 3.28.0)
project(design_patterns VERSION 0.2.0 LANGUAGES CXX)
include(CTest)
enable_testing()

add_executable(design_patterns src/main.cpp
src/Orc.cpp
src/Goblin.cpp
)
include_directories(include)
set_property(TARGET design_patterns PROPERTY CXX_STANDARD 17)
cmake_minimum_required(VERSION 3.5)
project(FoglioDiCalcolo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(test)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)
add_executable(FoglioDiCalcolo main.cpp Model.cpp Model.h Controller.cpp Controller.h View.cpp View.h ViewWindow.h Subject.h Observer.h)
target_link_libraries(FoglioDiCalcolo Qt5::Widgets core)
add_library(core ${SOURCE_FILES})
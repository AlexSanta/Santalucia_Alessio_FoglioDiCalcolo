cmake_minimum_required(VERSION 3.5)
project(FoglioDiCalcolo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(test)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)
include_directories(${Qt5Core_INCLUDE_DIRS})
set(SOURCE_FILES Model.cpp Model.h Controller.cpp Controller.h View.cpp View.h ViewWindow.h Subject.h Observer.h Counter.h)
add_executable(FoglioDiCalcolo main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(FoglioDiCalcolo core Qt5::Widgets)

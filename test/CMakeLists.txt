cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest-master)
set(gtest_SOURCE_DIR, ./lib/googletest-master)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


find_package(Qt5Widgets REQUIRED)
set(TEST_SOURCE_FILES runAllTests.cpp ModelTest.cpp ControllerTest.cpp MVCTest.cpp ObserverTest.cpp ObserverTestV2.cpp)
add_executable(runFoglioDiCalcoloTests ${TEST_SOURCE_FILES})
target_link_libraries(runFoglioDiCalcoloTests gtest gtest_main core Qt5::Widgets)

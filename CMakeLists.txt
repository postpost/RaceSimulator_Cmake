cmake_minimum_required (VERSION 3.10)
set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project (RaceSimulator)

include_directories(VehiclesDynamicLib)
set(SOURCES_EXE main.cpp)
add_executable(RaceSimulator ${SOURCES_EXE})

add_subdirectory(VehiclesDynamicLib)
target_link_libraries(RaceSimulator race_dll)
target_compile_definitions(race_dll PRIVATE CALCULATESPEEDLIBRARYDYNAMIC_EXPORTS)
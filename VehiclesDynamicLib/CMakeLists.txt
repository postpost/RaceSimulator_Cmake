cmake_minimum_required (VERSION 3.10)
set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project (race_dll)

set(SOURCES_DLL air_vehicle.cpp air_vehicle.h all_terrain_boots.cpp all_terrain_boots.h broom.cpp broom.h
	calculate_time.cpp calculate_time.h camel.cpp camel.h carpet_plane.cpp carpet_plane.h centaur.cpp centaur.h
	check_distance.cpp check_distance.h check_unique.cpp check_unique.h CountError.cpp CountError.h
	DistanceError.cpp DistanceError.h eagle.cpp eagle.h ground_vehicle.cpp ground_vehicle.h
	print_choice.cpp print_choice.h print_race_results.cpp print_race_results.h print_registrated.cpp
	print_registrated.h print_vc_name.cpp print_vc_name.h speed_camel.cpp speed_camel.h
	vehicle.cpp vehicle.h)

add_library(race_dll SHARED ${SOURCES_DLL})
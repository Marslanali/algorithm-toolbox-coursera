cmake_minimum_required(VERSION 3.5.1)
project(week4)

set(CMAKE_CXX_STANDARD 11)

add_executable(1_binary_search ${PROJECT_SOURCE_DIR}/src/1_binary_search/binary_search.cpp)
add_executable(2_majority_element ${PROJECT_SOURCE_DIR}/src/2_majority_element/majority_element.cpp)
add_executable(3_improving_quicksort ${PROJECT_SOURCE_DIR}/src/3_improving_quicksort/sorting.cpp)
add_executable(4_number_of_inversions ${PROJECT_SOURCE_DIR}/src/4_number_of_inversions/inversions.cpp)
add_executable(5_organizing_a_lottery ${PROJECT_SOURCE_DIR}/src/5_organizing_a_lottery/points_and_segments.cpp)
add_executable(6_closest_points ${PROJECT_SOURCE_DIR}/src/6_closest_points/closest.cpp)

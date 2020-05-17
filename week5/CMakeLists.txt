cmake_minimum_required(VERSION 3.5.1)
project(week5)

set(CMAKE_CXX_STANDARD 11)

add_executable(1_money_change_again ${PROJECT_SOURCE_DIR}/src/1_money_change_again/change_dp.cpp)
add_executable(2_primitive_calculator ${PROJECT_SOURCE_DIR}/src/2_primitive_calculator/primitive_calculator.cpp)
add_executable(3_edit_distance ${PROJECT_SOURCE_DIR}/src/3_edit_distance/edit_distance.cpp)
add_executable(4_longest_common_subsequence_of_two_sequences ${PROJECT_SOURCE_DIR}/src/4_longest_common_subsequence_of_two_sequences/lcs2.cpp)
add_executable(5_longest_common_subsequence_of_three_sequences ${PROJECT_SOURCE_DIR}/src/5_longest_common_subsequence_of_three_sequences/lcs3.cpp)


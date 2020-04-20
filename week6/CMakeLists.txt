cmake_minimum_required(VERSION 3.5.1)
project(week6)

set(CMAKE_CXX_STANDARD 11)

add_executable(1_maximum_amount_of_gold ${PROJECT_SOURCE_DIR}/src/1_maximum_amount_of_gold/knapsack.cpp)
add_executable(2_partitioning_souvenirs ${PROJECT_SOURCE_DIR}/src/2_partitioning_souvenirs/partition3.cpp)
add_executable(3_maximum_value_of_an_arithmetic_expression ${PROJECT_SOURCE_DIR}/src/3_maximum_value_of_an_arithmetic_expression/placing_parentheses.cpp)


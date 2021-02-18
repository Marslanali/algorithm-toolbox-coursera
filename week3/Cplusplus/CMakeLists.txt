cmake_minimum_required(VERSION 3.5.1)
project(week3)

set(CMAKE_CXX_STANDARD 11)

add_executable(1_money_change ${PROJECT_SOURCE_DIR}/src/1_money_change/change.cpp)
add_executable(2_maximum_value_of_the_loot ${PROJECT_SOURCE_DIR}/src/2_maximum_value_of_the_loot/fractional_knapsack.cpp)
add_executable(3_car_fueling ${PROJECT_SOURCE_DIR}/src/3_car_fueling/car_fueling.cpp)
add_executable(4_maximum_advertisement_revenue ${PROJECT_SOURCE_DIR}/src/4_maximum_advertisement_revenue/dot_product.cpp)
add_executable(5_collecting_signatures ${PROJECT_SOURCE_DIR}/src/5_collecting_signatures/covering_segments.cpp)
add_executable(6_maximum_number_of_prizes ${PROJECT_SOURCE_DIR}/src/6_maximum_number_of_prizes/different_summands.cpp)
add_executable(7_maximum_salary ${PROJECT_SOURCE_DIR}/src/7_maximum_salary/largest_number.cpp)


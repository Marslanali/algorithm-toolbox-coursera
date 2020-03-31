cmake_minimum_required(VERSION 3.5.1)
project(week1)

set(CMAKE_CXX_STANDARD 11)

add_executable(max-pair-wise-product ${PROJECT_SOURCE_DIR}/src/max-pair-wise-product/max_pairwise_product.cpp)
add_executable(sum-of-two-digits ${PROJECT_SOURCE_DIR}/src/sum-of-two-digits/aplusb.cpp)


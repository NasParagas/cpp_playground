cmake_minimum_required(VERSION 4.1.2)
project(chap2 CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(init init.cpp)
add_executable(endl_n_bench endl_n_bench.cpp)
add_executable(const_constexpr const_constexpr.cpp)
add_executable(struct struct.cpp)
add_executable(switch switch.cpp)
add_executable(class class.cpp)
add_executable(2_4_1_vector
    2_4_1_vector.cpp
    2_4_1_user.cpp)
cmake_minimum_required(VERSION 3.21)
project(SallaryCalc)

set(CMAKE_CXX_STANDARD 23)

add_executable(SallaryCalc main.cpp Staff.cpp Staff.h Emploee.cpp Emploee.h)

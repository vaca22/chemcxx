cmake_minimum_required(VERSION 3.16)
project(chemcxx)

set(CMAKE_CXX_STANDARD 11)
include_directories(/usr/lib/jvm/java-17-oracle/include)
include_directories(/usr/lib/jvm/java-17-oracle/include/linux)
add_library(chemcxx SHARED chemMain.cpp chem.cpp rationalMatrix.cpp rationalNumber.cpp)
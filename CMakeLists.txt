cmake_minimum_required(VERSION 3.17)
project(Assignment1)

set(CMAKE_CXX_STANDARD 11)

add_executable(Assignment1 src/main.cpp src/Agent.cpp include/Tree.h include/Session.h include/Agent.h include/Graph.h include/json.hpp src/Tree.cpp src/Session.cpp src/Graph.cpp)
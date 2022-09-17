cmake_minimum_required(VERSION 3.21)
project(base_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(base_cpp main.cpp Document.cpp Document.h CartItem.cpp CartItem.h Client.cpp Client.h Quote.cpp Quote.h Invoice.cpp Invoice.h)

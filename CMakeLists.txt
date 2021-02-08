cmake_minimum_required(VERSION 3.17)
project(santa)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/../trans-dsl-2/include"
        "/usr/local/include"
)

add_library(santa library.cpp library.h include/santa/concept/State.h include/santa/Status.h include/santa/concept/StateTransit.h include/santa/concept/StateId.h include/santa/concept/StateFactory.h)
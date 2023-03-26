cmake_minimum_required(VERSION 3.10.2)

project(bcon)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

#third_party
add_subdirectory(third_party/googletest)
add_subdirectory(third_party/spdlog)
add_subdirectory(third_party/jsoncpp)
add_subdirectory(third_party/asio)

set(SRCS bcon/bconnect.cc)
set(TEST_SRCS 
    bcon/test_main.cc
    bcon/bconnect_test.cc)

add_library(bcon SHARED ${SRCS})

add_executable(bcon_test ${TEST_SRCS})
target_link_libraries(bcon_test gtest)


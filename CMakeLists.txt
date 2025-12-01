cmake_minimum_required(VERSION 4.0)
project(logic_forge)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    logic_forge
    main.cpp
    leetcode/easy/two-sum/two-sum.cpp
    leetcode/easy/missing-number/missing-number.cpp
)

target_include_directories(logic_forge PRIVATE
    ${CMAKE_SOURCE_DIR}/leetcode/easy
    ${CMAKE_SOURCE_DIR}/leetcode/easy/two-sum
    ${CMAKE_SOURCE_DIR}/leetcode/easy/missing-number
)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
target_link_libraries(logic_forge PRIVATE
    sfml-graphics
    sfml-window
    sfml-system
)
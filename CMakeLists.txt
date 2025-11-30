cmake_minimum_required(VERSION 4.0)
project(logic_forge)

set(CMAKE_CXX_STANDARD 20)

include_directories(leetcode/easy/two-sum)

add_executable(
    logic_forge
    main.cpp
        leetcode/easy/two-sum/two-sum.cpp
)

include_directories(leetcode/easy/two-sum)

set(CMAKE_CXX_STANDARD 20)

# Ищем SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Линкуем SFML
target_link_libraries(logic_forge sfml-graphics sfml-window sfml-system)

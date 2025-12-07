add_library(utils fibonacci.cpp)

add_library(problems
        problem001.cpp
        problem002.cpp)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE problems utils)

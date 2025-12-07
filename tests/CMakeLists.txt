find_package(Catch2 3 REQUIRED)

add_executable(tests tests.cpp)

target_include_directories(tests PRIVATE ../src)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain problems utils)

include(CTest)
include(Catch)
catch_discover_tests(tests)

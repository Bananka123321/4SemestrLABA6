include(FetchContent)

FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/refs/heads/main.zip)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_calories calories_test.cpp)

target_link_libraries(test_calories DietDLL gtest_main)

include(GoogleTest)
gtest_discover_tests(test_calories)
# Enable testing
enable_testing()

# Find GTest package
find_package(GTest REQUIRED)

# Add test executable
add_executable(MyAppTest test_main.cpp)

# Link GTest libraries
target_link_libraries(MyAppTest ${GTEST_LIBRARIES})

# Add test
add_test(NAME MyAppTest COMMAND MyAppTest)
#include "gtest/gtest.h"

TEST(MyAppTest, MyFunction) {
    // EXPECT_EQ(my_function(), 5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
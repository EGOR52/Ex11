// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>
#include "train.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Train, test1) {
Train train;
EXPECT_EQ(1000, train.length())}
}

TEST(Train, test2) {
Train train;
Cage* cage = new Cage();
train.addCage(cage);

EXPECT_EQ(1, train.length());
}
#include "gtest/gtest.h"
#include "../Model.cpp"


TEST(Model, DefaultConstructor) {

    Model m;
    ASSERT_EQ(0, m.getIndex());
    ASSERT_EQ(4, m.getNce());
    ASSERT_EQ(4, m.getNcu());
    ASSERT_EQ(0, m.getValue(0, 0));
}


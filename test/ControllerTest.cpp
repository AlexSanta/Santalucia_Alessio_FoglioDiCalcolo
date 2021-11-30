#include "gtest/gtest.h"
#include "../Controller.cpp"


TEST(Controller, Constructor) {

    Model m;
    Controller c=Controller(&m);
    ASSERT_EQ(4, c.getNce());
    ASSERT_EQ(4, c.getNcu());
}


TEST(Controller, Operations1){
    Model m;
    Controller c=Controller(&m);
    float operands[4]={2,3,5,10};
    ASSERT_EQ(20, c.sum(operands));
    ASSERT_EQ(5, c.mean(c.sum(operands)));
    ASSERT_EQ(2, c.min(operands));
    ASSERT_EQ(10, c.max(operands));
}

TEST(Controller, Operations2){
    Model m;
    Controller c=Controller(&m);
    float operands[4]={0,21,3.5,8.5};
    ASSERT_EQ(33, c.sum(operands));
    ASSERT_EQ(8.25, c.mean(c.sum(operands)));
    ASSERT_EQ(0, c.min(operands));
    ASSERT_EQ(21, c.max(operands));
}

TEST(Controller, Operations3){
    Model m;
    Controller c=Controller(&m);
    float operands[4]={30,-2,-7.25,6.25};
    ASSERT_EQ(27, c.sum(operands));
    ASSERT_EQ(6.75, c.mean(c.sum(operands)));
    ASSERT_EQ(-7.25, c.min(operands));
    ASSERT_EQ(30, c.max(operands));
}



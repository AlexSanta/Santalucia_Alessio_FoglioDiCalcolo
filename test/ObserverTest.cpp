#include "gtest/gtest.h"
#include "../Model.h"
#include "../Counter.h"

TEST(Model, CountNotify) {
    Model m;
    Counter c;
    m.addObserver(&c);
    float operands[4] = {2, 3, 5, 10};
    m.adj(operands);
    ASSERT_EQ(1, c.getCount());
    m.adj(operands);
    m.adj(operands);
    ASSERT_EQ(3, c.getCount());
    m.adj(operands);
    ASSERT_EQ(4, c.getCount());
}
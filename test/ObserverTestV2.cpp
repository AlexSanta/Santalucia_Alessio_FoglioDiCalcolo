#include "gtest/gtest.h"
#include "../Model.h"
#include "../Observer.h"

class CounterSuite : public Observer, public ::testing::Test {

protected:

    virtual void SetUp() {
        m.addObserver(this);
    }

    virtual void update() override { count++; }

    int getCount() const { return count; }

    Model m;
    int count = 0;
};


TEST_F(CounterSuite, CountNotify) {
    float operands[4] = {2, 3, 5, 10};
    m.adj(operands);
    ASSERT_EQ(1, getCount());
    m.adj(operands);
    m.adj(operands);
    ASSERT_EQ(3, getCount());
    m.adj(operands);
    ASSERT_EQ(4, getCount());
}


#include "gtest/gtest.h"
/*
#include <QApplication>
#include "../View.h"

class MVCSuite : public ::testing::Test {

protected:

    virtual void SetUp() {
        int i=1;
        char** l;
        QApplication app(i,l);
        m=new Model;
        c=new Controller(m);
        v=new View(m,c);
        v->getUi()->tW->item(1,0)->setText("12");
        v->getUi()->tW->item(1,1)->setText("3.5");
        v->getUi()->tW->item(1,2)->setText("7");
        v->getUi()->tW->item(1,3)->setText("-4");
    }

    Model *m;
    Controller *c;
    View *v;
};


TEST_F(MVCSuite, TestFalseChange) {
    v->getUi()->tW->item(1,0)->setText("a");
    ASSERT_EQ("12", v->getUi()->tW->item(1,0)->text());
    ASSERT_EQ("18.5", v->getUi()->tW->item(1,4)->text());
    ASSERT_EQ("4.625", v->getUi()->tW->item(1,5)->text());
    ASSERT_EQ("-4", v->getUi()->tW->item(1,6)->text());
    ASSERT_EQ("12", v->getUi()->tW->item(1,7)->text());
}

TEST_F(MVCSuite, TestChange) {
    v->getUi()->tW->item(1,1)->setText("23");
    ASSERT_EQ(1, m->getIndex());
    ASSERT_EQ("38", v->getUi()->tW->item(1,4)->text());
    ASSERT_EQ("9.5", v->getUi()->tW->item(1,5)->text());
    ASSERT_EQ("-4", v->getUi()->tW->item(1,6)->text());
    ASSERT_EQ("23", v->getUi()->tW->item(1,7)->text());
}
*/
#ifndef FORMULA_H
#define FORMULA_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}
double root_1=0;
double root_2=0;


TEST(formulaTest, a0) {
    formula(0,2,4,&root_1, &root_2);
    ASSERT_EQ(root_1, -222); // Это не квадратное уравнение, так как a = 0
    root_1=0;
}

TEST(formulaTest, 2_roots) {
    formula(1,2,3,&root_1, &root_2);
    ASSERT_EQ(root_1, 0);
    ASSERT_EQ(root_2,-2);
    root_1=0;
    root_2=0;
    formula(2,5,3,&root_1, &root_2);
    ASSERT_EQ(root_1, 1);
    ASSERT_EQ(root_2,-1.5);
    root_1=0;
    root_2=0;
}

TEST(formulaTest, 1_root) {
    formula(4,4,1,&root_1, &root_2);
    ASSERT_EQ(root_1, -2);
    root_1=0;
}

TEST(formulaTest, 0_root) {
    formula(2,0,1,&root_1, &root_2);
    ASSERT_EQ(root_1, -111);
    root_1=0;
}
#endif // FORMULA_H

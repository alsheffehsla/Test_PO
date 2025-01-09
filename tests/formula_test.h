#ifndef FORMULA_H
#define FORMULA_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(formulaTest, a0) {
    ASSERT_EQ(formula(0,2,4), -222); // Это не квадратное уравнение, так как a = 0
}

TEST(formulaTest, 2_roots) {
    ASSERT_EQ(formula(1,2,3), 0,-2);
    ASSERT_EQ(formula(2,5,3), 1,-1.5);
}

TEST(formulaTest, 1_root) {
    ASSERT_EQ(formula(4,4,1), -2);
}

TEST(formulaTest, 0_root) {
    ASSERT_EQ(formula(2,0,1), -111);
}

#endif // FORMULA_H
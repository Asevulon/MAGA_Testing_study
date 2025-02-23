#pragma once
#include<cxxtest/TestSuite.h>
#include"Solver.h"

class MyTestSuite :public CxxTest::TestSuite
{
public:
    void testSolving(void) {
        double a = 1;
        double b = 2;
        double c = 1;
        double x1 = 0;
        double x2 = 0;

        Solve(a, b, c, x1, x2);
        TSM_ASSERT_EQUALS("x1 pupupu", x1, 1);
        TSM_ASSERT_EQUALS("x2", x1, -1);

    }
};
#pragma once
#include<cxxtest/TestSuite.h>
#include"Solver.h"

class MyTestSuite :public CxxTest::TestSuite
{
public:
    void testArguments(void) {
        double a = 0;
        double b = 1;
        double c = 1;
        double x1 = 0;
        double x2 = 0;

        int res = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("a = 0 not catched", res == 1, true);

        a = 1;
        b = 0;
        c = 1;

        res = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("b = 0 not catched", res == 1, true);

        a = 1;
        b = 1;
        c = 0;

        res = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("c = 0 not catched", res == 1, true);
    }

    void testNegativeD(void) {

        double a = 1;
        double b = 1;
        double c = 10;
        double x1 = 0;
        double x2 = 0;

        int res = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("D < 0 not catched", res == 2, true);
    }

    void testPositiveValues(void) {
        double a = 1;
        double b = 5;
        double c = 4;
        double x1 = 0;
        double x2 = 0;

        int res = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 0", res == 0, true);
        ETSM_ASSERT_EQUALS("a = 0 not catched", x1 == -1, true);
        ETSM_ASSERT_EQUALS("a = 0 not catched", x2 == -4, true);
    }

    void testNegativeValues(void) {
        double a = -1;
        double b = 3;
        double c = 4;
        double x1 = 0;
        double x2 = 0;

        int res = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 0", res == 0, true);
        ETSM_ASSERT_EQUALS("a = 0 not catched", x1 == -1, true);
        ETSM_ASSERT_EQUALS("a = 0 not catched", x2 == 4, true);

        a = 1;
        b = -5;
        c = 4;

        res = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 0", res == 0, true);
        ETSM_ASSERT_EQUALS("a = 0 not catched", x1 == 4, true);
        ETSM_ASSERT_EQUALS("a = 0 not catched", x2 == 1, true);
    }
};
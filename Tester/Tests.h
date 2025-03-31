#pragma once
#include<cxxtest/TestSuite.h>
#include"Solver.h"

class MyTestSuite :public CxxTest::TestSuite
{
public:
    
    const double epsilon = 1e-15;

    void testSingleRoot(void) {
        double a = 1;
        double b = 2;
        double c = 1;
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", Resp == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -1, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -1, true);
                 
    }
    
    void testTwoRoots(void) {
        double a = 1;
        double b = 5;
        double c = 4;
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", Resp == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -1, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -4, true);
    }
    
    void testZeroRoots(void) {
        double a = 1;
        double b = 1;
        double c = 1;
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return != 2", Resp == 2, true);
    }

    void testLinearAboveZero(void)
    {
        double a = 1e-16;
        double b = 2;
        double c = 4;
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 1", Resp == 1, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -2, true);
    }

    void testLinearBelowZero(void)
    {
        double a = -1e-16;
        double b = 2;
        double c = 4;
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 1", Resp == 1, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -2, true);
    }

    void testAboveEpsilonBorder(void) {
        double a = 1 + std::numeric_limits<double>::epsilon();
        double b = 5;
        double c = 4;
        double epsilon = 1;
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 1", Resp == 0, true);
    }

    void testBelowEpsilonBorder(void) {
        double a = 1;
        double b = 5;
        double c = 4;
        double epsilon = 1 + std::numeric_limits<double>::epsilon();
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 1", Resp == 1, true);
    }

    void testInfSol(void) {
        double a = 1;
        double b = 1;
        double c = 4;
        double epsilon = 1 + std::numeric_limits<double>::epsilon();
        double x1 = 0;
        double x2 = 0;

        int Resp = Solve(a, b, c, epsilon, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not 1", Resp == 3, true);
    }
};
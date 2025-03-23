#pragma once
#include<cxxtest/TestSuite.h>
#include"Solver.h"

class MyTestSuite :public CxxTest::TestSuite
{
public:
    
    void testTwoDistinctRoots(void) {
        double a = 1;
        double b = 5;
        double c = 6;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -2, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -3, true);

                 
    }

    void testSingleRoot(void) {
        double a = 1;
        double b = 2;
        double c = 1;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -1, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -1, true);
                 
    }

    void testNegativeDiscriminant(void) {
        double a = 1;
        double b = 1;
        double c = 1;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Wrong return value, negative discriminant must return 2", ErrorCode == 2, true);
                 
    }

    void testZeroACoefficientError(void) {
        double a = 0;
        double b = 2;
        double c = 3;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Wrong return value, zero a coefficient must return 1", ErrorCode == 1, true);
                 
    }

    void testZeroBCoefficientValid(void) {
        double a = 2;
        double b = 0;
        double c = 3;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Wrong return value, zero b coefficient must return 2", ErrorCode == 2, true);
                 
    }

    void testZeroBCoefficientValidWithPositiveDiscrimenant(void) {
        double a = 2;
        double b = 0;
        double c = -4.5;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == 1.5, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -1.5, true);
                 
    }

    void testZeroCCoefficientValid(void) {
        double a = 2;
        double b = 5;
        double c = 0;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == 0, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -2.5, true);
                 
    }

    void testNegativeCoefficientsHandling(void) {
        double a = -2;
        double b = -4;
        double c = -2;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -1, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -1, true);
                 
    }

    void testAllZeroCoefficientsError(void) {
        double a = 0;
        double b = 0;
        double c = 0;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Wrong return value, zero coefficients must return 1", ErrorCode == 1, true);
                 
    }
};
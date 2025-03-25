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

    void testANearZeroPositive(void) {
        double a = 1e-15;
        double b = 5e-15;
        double c = 4e-15;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -1, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -4, true);
    }

    void testANearZeroNegative(void) {
        double a = -1e-15;
        double b = -5e-15;
        double c = -4e-15;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1 == -4, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2 == -1, true);
    }

    void testDNearZeroPositive(void) {
        double a = 1;
        double b = -4;
        double c = 4 - 1e-15;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        printf("x1:%.16f, x2:%.16f\n", x1, x2);

        auto round = [](double x) {
            int64_t temp = x * 1e16;
            int64_t mod = temp % 10;
            if (mod > 4) temp += 10 - mod;
            printf("temp: %lld\n", temp);
            return temp;
            };

        double x1r = round(x1);
        double x2r = round(x2);
        printf("x1:%.16f, x2:%.16f\n", x1, x2);
        ETSM_ASSERT_EQUALS("Solve return not OK", ErrorCode == 0, true);
        ETSM_ASSERT_EQUALS("x1 has wrong result", x1r == 20000000298023224, true);
        ETSM_ASSERT_EQUALS("x2 has wrong result", x2r == 19999999701976780, true);
    }

    void testDNearZeroNegative(void) {
        double a = 1;
        double b = 2;
        double c = 1 + 1e-15;
        double x1 = 0;
        double x2 = 0;

        int ErrorCode = Solve(a, b, c, x1, x2);
        ETSM_ASSERT_EQUALS("Wrong return value, negative discriminant must return 2", ErrorCode == 2, true);
    }
};
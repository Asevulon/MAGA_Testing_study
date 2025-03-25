/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "Tests.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "Tests.h", 5, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testTwoDistinctRoots : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testTwoDistinctRoots() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 9, "testTwoDistinctRoots" ) {}
 void runTest() { suite_MyTestSuite.testTwoDistinctRoots(); }
} testDescription_suite_MyTestSuite_testTwoDistinctRoots;

static class TestDescription_suite_MyTestSuite_testSingleRoot : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSingleRoot() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 24, "testSingleRoot" ) {}
 void runTest() { suite_MyTestSuite.testSingleRoot(); }
} testDescription_suite_MyTestSuite_testSingleRoot;

static class TestDescription_suite_MyTestSuite_testNegativeDiscriminant : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testNegativeDiscriminant() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 38, "testNegativeDiscriminant" ) {}
 void runTest() { suite_MyTestSuite.testNegativeDiscriminant(); }
} testDescription_suite_MyTestSuite_testNegativeDiscriminant;

static class TestDescription_suite_MyTestSuite_testZeroACoefficientError : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testZeroACoefficientError() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 50, "testZeroACoefficientError" ) {}
 void runTest() { suite_MyTestSuite.testZeroACoefficientError(); }
} testDescription_suite_MyTestSuite_testZeroACoefficientError;

static class TestDescription_suite_MyTestSuite_testZeroBCoefficientValid : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testZeroBCoefficientValid() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 62, "testZeroBCoefficientValid" ) {}
 void runTest() { suite_MyTestSuite.testZeroBCoefficientValid(); }
} testDescription_suite_MyTestSuite_testZeroBCoefficientValid;

static class TestDescription_suite_MyTestSuite_testZeroCCoefficientValid : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testZeroCCoefficientValid() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 76, "testZeroCCoefficientValid" ) {}
 void runTest() { suite_MyTestSuite.testZeroCCoefficientValid(); }
} testDescription_suite_MyTestSuite_testZeroCCoefficientValid;

static class TestDescription_suite_MyTestSuite_testNegativeCoefficientsHandling : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testNegativeCoefficientsHandling() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 90, "testNegativeCoefficientsHandling" ) {}
 void runTest() { suite_MyTestSuite.testNegativeCoefficientsHandling(); }
} testDescription_suite_MyTestSuite_testNegativeCoefficientsHandling;

static class TestDescription_suite_MyTestSuite_testANearZeroPositive : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testANearZeroPositive() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 104, "testANearZeroPositive" ) {}
 void runTest() { suite_MyTestSuite.testANearZeroPositive(); }
} testDescription_suite_MyTestSuite_testANearZeroPositive;

static class TestDescription_suite_MyTestSuite_testANearZeroNegative : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testANearZeroNegative() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 117, "testANearZeroNegative" ) {}
 void runTest() { suite_MyTestSuite.testANearZeroNegative(); }
} testDescription_suite_MyTestSuite_testANearZeroNegative;

static class TestDescription_suite_MyTestSuite_testDNearZeroPositive : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDNearZeroPositive() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 130, "testDNearZeroPositive" ) {}
 void runTest() { suite_MyTestSuite.testDNearZeroPositive(); }
} testDescription_suite_MyTestSuite_testDNearZeroPositive;

static class TestDescription_suite_MyTestSuite_testDNearZeroNegative : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDNearZeroNegative() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 156, "testDNearZeroNegative" ) {}
 void runTest() { suite_MyTestSuite.testDNearZeroNegative(); }
} testDescription_suite_MyTestSuite_testDNearZeroNegative;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";

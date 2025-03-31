/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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

static class TestDescription_suite_MyTestSuite_testSingleRoot : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSingleRoot() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 11, "testSingleRoot" ) {}
 void runTest() { suite_MyTestSuite.testSingleRoot(); }
} testDescription_suite_MyTestSuite_testSingleRoot;

static class TestDescription_suite_MyTestSuite_testTwoRoots : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testTwoRoots() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 25, "testTwoRoots" ) {}
 void runTest() { suite_MyTestSuite.testTwoRoots(); }
} testDescription_suite_MyTestSuite_testTwoRoots;

static class TestDescription_suite_MyTestSuite_testZeroRoots : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testZeroRoots() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 38, "testZeroRoots" ) {}
 void runTest() { suite_MyTestSuite.testZeroRoots(); }
} testDescription_suite_MyTestSuite_testZeroRoots;

static class TestDescription_suite_MyTestSuite_testLinearAboveZero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testLinearAboveZero() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 49, "testLinearAboveZero" ) {}
 void runTest() { suite_MyTestSuite.testLinearAboveZero(); }
} testDescription_suite_MyTestSuite_testLinearAboveZero;

static class TestDescription_suite_MyTestSuite_testLinearBelowZero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testLinearBelowZero() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 62, "testLinearBelowZero" ) {}
 void runTest() { suite_MyTestSuite.testLinearBelowZero(); }
} testDescription_suite_MyTestSuite_testLinearBelowZero;

static class TestDescription_suite_MyTestSuite_testAboveEpsilonBorder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAboveEpsilonBorder() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 75, "testAboveEpsilonBorder" ) {}
 void runTest() { suite_MyTestSuite.testAboveEpsilonBorder(); }
} testDescription_suite_MyTestSuite_testAboveEpsilonBorder;

static class TestDescription_suite_MyTestSuite_testBelowEpsilonBorder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBelowEpsilonBorder() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 87, "testBelowEpsilonBorder" ) {}
 void runTest() { suite_MyTestSuite.testBelowEpsilonBorder(); }
} testDescription_suite_MyTestSuite_testBelowEpsilonBorder;

static class TestDescription_suite_MyTestSuite_testInfSol : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInfSol() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 99, "testInfSol" ) {}
 void runTest() { suite_MyTestSuite.testInfSol(); }
} testDescription_suite_MyTestSuite_testInfSol;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";

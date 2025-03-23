#include "pch.h"
#include "Solver.h"
#include<cmath>


enum ErrorCode {
	ok = 0,
	WrongArgument = 1,
	NegativeD = 2,
};

extern "C" int Solve(double a, double b, double c, double& x1, double& x2) {

	if (a == 0)return WrongArgument;

	double D = b * b - 4 * a * c;
	if (D < 0)return NegativeD;

	x1 = (-b + sqrt(D)) / 2. / a;
	x2 = (-b - sqrt(D)) / 2. / a;
	return ok;
}
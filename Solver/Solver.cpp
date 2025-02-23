#include "pch.h"
#include "Solver.h"
#include<cmath>


enum ErrorCode {
	ok = 0
};

extern "C" int Solve(double a, double b, double c, double& x1, double& x2) {

	double D = b * b - 4 * a * c;
	x1 = (-b + sqrt(D)) / 2. / a;
	x2 = (-b - sqrt(D)) / 2. / a;
	return ok;
}
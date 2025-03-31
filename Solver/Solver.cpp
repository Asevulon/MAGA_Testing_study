#include "pch.h"
#include "Solver.h"
#include<cmath>


enum Resp {
	ok = 0,
	Linear = 1,
	NegativeD = 2,
	infsol = 3
};

extern "C" int Solve(double a, double b, double c, double epsilon, double& x1, double& x2) {

	if (fabs(a) < epsilon)
	{
		if (fabs(b) < epsilon)return infsol;

		x1 = -c / b;
		return Linear;
	}

	double D = b * b - 4 * a * c;
	if (D < 0)return NegativeD;

	x1 = (-b + sqrt(D)) / 2. / a;
	x2 = (-b - sqrt(D)) / 2. / a;
	return ok;
}
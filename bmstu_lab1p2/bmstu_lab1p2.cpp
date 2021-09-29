#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
	double a, b, c, sqrtD, res1, res2;
	printf_s("a="); scanf_s("%lf", &a);
	printf_s("b="); scanf_s("%lf", &b);
	printf_s("c="); scanf_s("%lf", &c);
	sqrtD = sqrt(b * b - 4 * a * c);
	res1 = (-b + sqrtD) / (2*a);
	res2 = (-b - sqrtD) / (2*a);
	std::cout << "x=" << res1 << " or " << res2;
}
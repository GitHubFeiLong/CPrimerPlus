#include <stdio.h>

double reconcile_average(double, double);

int main(void)
{
	double d1, d2;

	d1 = 1.5;
	d2 = 2.5;
	printf("%lf和%lf的调和平均数是%lf", d1, d2, reconcile_average(d1, d2));
	return 0;
}

double reconcile_average(double d1, double d2)
{
	double dao1 = 1.0 / d1;
	double dao2 = 1.0 / d2;

	return 1.0 / ((dao1 + dao2) / 2);
}

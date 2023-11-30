#include <stdio.h>

void larger_of(double * x, double * y);

int main(void)
{
	double d1, d2;

	d1 = 1.5;
	d2 = 1.99;
	printf("Old d1=%lf,d2=%lf\n", d1, d2);
	larger_of(&d1, &d2);
	printf("Now d1=%lf,d2=%lf\n", d1, d2);

	return 0;
}

void larger_of(double * x, double * y)
{
	if (*x > *y)
		*y = *x;
	else
		*x = *y;
}
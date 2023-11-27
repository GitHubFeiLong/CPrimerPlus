#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double min(double, double);

int main(void)
{
	double x, y;
	int status;

	printf("Enter two double(q quit)exit:\n");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		printf("%lf %lf min %lf\n", x, y, min(x, y));
		printf("Please enter:\n");
	}
	printf("Bye!\n");

	return 0;
}

double min(double x, double y)
{
	return x > y ? y : x;
}
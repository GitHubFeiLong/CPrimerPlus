#include <stdio.h>

void fun(double * d1, double * d2, double * d3);

int main(void)
{
	double d1, d2, d3;

	d1 = 1.5;
	d2 = 1.3;
	d3 = 1.2;
	printf("%lf,%lf,%lf\n", d1, d2, d3);
	fun(&d1, &d2, &d3);
	printf("%lf,%lf,%lf\n", d1, d2, d3);

	return 0;
}

void fun(double* d1, double* d2, double* d3)
{
	double min, mid, max;
	
	if (*d1 <= *d2 && *d1 <= *d3)
	{
		min = *d1;
		if (*d2 < *d3)
		{
			mid = *d2;
			max = *d3;
		}
		else
		{
			mid = *d3;
			max = *d2;
		}
	}
	else if (*d2 <= *d1 && *d2 <= *d3)
	{
		min = *d2;
		if (*d1 < *d3)
		{
			mid = *d1;
			max = *d3;
		}
		else
		{
			mid = *d3;
			max = *d1;
		}
	}
	else
	{
		min = *d3;
		if (*d1 < *d2)
		{
			mid = *d1;
			max = *d2;
		}
		else
		{
			mid = *d2;
			max = *d1;
		}
	}

	*d1 = min;
	*d2 = mid;
	*d3 = max;
}
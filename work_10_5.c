#include <stdio.h>
#include <float.h>

double get_diff_value(double * arr, int size);

int main(void)
{
	double arr[] = { 1.5, 2.3, 10.2, 3.3, 9.123 };

	printf("value = %lf", get_diff_value(arr, sizeof(arr) / sizeof(arr[0])));

	return 0;
}

double get_diff_value(double* arr, int size)
{
	int i;
	double max, min;

	max = min = arr[0];
	for (i = 0; i < size; i++)
	{
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}

	return max - min;
}
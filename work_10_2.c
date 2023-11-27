#include <stdio.h>

void copy_arr(double target[], double source[], int size);
void copy_ptr(double* target, double* source, int size);
void copy_ptrs(double* target, double* source, double* end);
void print_arr(double arr[], int size);

int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	print_arr(target1, 5);

	copy_ptr(target2, source, 5);
	print_arr(target2, 5);

	copy_ptrs(target3, source, source + 4);
	print_arr(target3, 5);

	return 0;
}

void copy_arr(double target[], double source[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		target[i] = source[i];
}

void copy_ptr(double* target, double* source, int size)
{
	int i;

	for (i = 0; i < size; i++)
		*(target + i) = *(source + i);
}

void copy_ptrs(double* target, double* source, double* end)
{
	int i;
	long s = end - source;
	for (i = 0; i <= s; i++)
		*(target + i) = *(source + i);
}

void print_arr(double arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf(" %.1lf ", arr[i]);
	printf("\n");
}
#include <stdio.h>

int max_index(double[], int);

int main(void)
{
	double arr[] = {1.0, 2.5, 3.2, 24.1, 22.43};
	printf("maxIndex = %d", max_index(arr, sizeof(arr) / sizeof(arr[0])));

	return 0;
}

int max_index(double arr[], int size)
{
	int i, maxIndex;

	for (i = 1, maxIndex = 0; i < size; i++)
		maxIndex = arr[maxIndex] < arr[i] ? i : maxIndex;

	return maxIndex;
}
#include <stdio.h>

int max(int arr[], int size);

int main(void)
{
	int arr[] = { 6,5,9,2 };

	printf("max = %d", max(arr, sizeof(arr) / sizeof(arr[0])));
	return 0;
}

int max(int arr[], int size)
{
	int i = 0;
	int max = 0;

	for (i = 0; i < size; i++)
		max = arr[i] > max ? arr[i] : max;

	return max;
}
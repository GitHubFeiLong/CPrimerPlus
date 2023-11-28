#include <stdio.h>

void sort(double* arr, int size);
void print_arr(double* arr, int size);

int main(void)
{
	double arr[] = {1.4, 2.3, 11, 14.2, 2.1, 9.0};

	printf("Old:");
	print_arr(arr, sizeof(arr) / sizeof(arr[0]));
	sort(arr, sizeof(arr) / sizeof(arr[0]));
	printf("Now:");
	print_arr(arr, sizeof(arr) / sizeof(arr[0]));

	return 0;
}

void sort(double* arr, int size)
{
	double temp;
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void print_arr(double* arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%4.2lf\t", arr[i]);
	}
	printf("\n");
}
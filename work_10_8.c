#include <stdio.h>
#define SIZE 7

void copy_arr(int target[], int source[], int size);
void copy_arr_ptr(int * target, int * source, int i);
void print_arr(double arr[], int size);

int main(void)
{
	int arr[SIZE] = {1, 2, 4, 3, 5, 7, 6};
	int arr1[3];
	copy_arr_ptr(arr1, arr + 2, 3);
	print_arr(arr1, sizeof(arr1)/ sizeof(arr1[0]));
	return 0;
}

void copy_arr(int target[], int source[], int size)
{
	int i, j;

	for (i = 2, j = 0; i < 5; i++, j++)
		target[j] = source[i];
}

void copy_arr_ptr(int* target, int* source, int num)
{
	int i;

	for (i = 0; i < num; i++)
		*(target + i) = *(source + i);
}

void print_arr(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf(" %d ", arr[i]);
	printf("\n");
}
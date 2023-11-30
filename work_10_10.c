#include <stdio.h>
#define SIZE 4

void sum_to_arr(int* target, int* source1, int* source2, int size);
void print_arr(int* arr, int size);

int main(void)
{
	int source1[SIZE] = {2, 4, 5, 8};
	int source2[SIZE] = {1, 0, 4, 6};
	int target[SIZE];

	sum_to_arr(target, source1, source2, SIZE);
	printf("source1:\n");
	print_arr(source1, SIZE);
	printf("source2:\n");
	print_arr(source2, SIZE);
	printf("target:\n");
	print_arr(target, SIZE);
	return 0;
}

void sum_to_arr(int* target, int* source1, int* source2, int size)
{
	int i;

	for (i = 0; i < size; i++)
		*(target + i) = *(source1 + i) + *(source2 + i);
}

void print_arr(int* arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%4d", *(arr + i));
	printf("\n");
}
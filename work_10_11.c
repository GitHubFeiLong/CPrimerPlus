#include <stdio.h>
#define ROW 3
#define COL 5

void print_arr(int (* p)[COL], int rows);
void print_arr_2(int (* p)[COL], int rows);

int main(void)
{
	int arr[ROW][COL] = {
		{11, 12, 13, 14, 15},
		{21, 22, 23, 24, 25},
		{31, 32, 33, 34, 35},
	};

	print_arr(arr, ROW);
	printf("double:\n");
	print_arr_2(arr, ROW);

	return 0;
}

void print_arr(int(*p)[COL], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%4d", *(*(p + i) + j));
		}
		printf("\n");
	}
}

void print_arr_2(int(*p)[COL], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%4d", *(*(p + i) + j) * 2);
		printf("\n");
	}
}
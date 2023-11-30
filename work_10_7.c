#include <stdio.h>
#define ROW 3
#define COL 5

void copy_arrs(double target[][COL], double source[][COL], int size);
void copy_arr(double target[], double source[], int size);

int main(void)
{
	double source[][COL] = {
		{1.1, 1.2, 1.3, 1.4, 1.5},
		{2.1, 2.2, 2.3, 2.4, 2.5},
		{3.1, 3.2, 3.3, 3.4, 3.5}
	};
	double target[ROW][COL];
	int i, j;

	copy_arrs(target, source, ROW);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%.2lf\t", target[i][j]);
		printf("\n");
	}

	return 0;
}

void copy_arrs(double target[][COL], double source[][COL], int size)
{
	int i,j;

	for (i = 0; i < size; i++)
	{
		copy_arr(target[i], source[i], COL);
	}

}

void copy_arr(double target[], double source[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		target[i] = source[i];
	}
}
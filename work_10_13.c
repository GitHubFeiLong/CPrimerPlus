#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 5

void save_data(double (* p)[COL], int size);
void average_col(double (* p)[COL], int size);
void average(double (* p)[COL], int size);
void find_max(double arr[][COL], int size);
void print_arr(double(*p)[COL], int size);

int main(void)
{
	double arr[3][5];
	
	save_data(arr, ROW);
	average_col(arr, ROW);
	average(arr, ROW);
	print_arr(arr, ROW);
	return 0;
}

void save_data(double(*p)[COL], int size)
{
	int i;

	printf("你输入的数字如下：\n");
	for (i = 0; i < size; i++)
	{
		printf("请输入第%d组数（5个double类型的数）:\n", i + 1);
		// scanf 将所需的数据读取后，如果有不需要的数据，会放回输入缓冲区内。
		scanf("%lf %lf %lf %lf %lf", *(p + i) + COL - 5,
			*(p + i) + COL - 4, *(p + i) + COL - 3,
			*(p + i) + COL - 2, *(p + i) + COL - 1);
		
		// 所以这里需要将其剩余输入全部丢弃
		while (getchar() != '\n')
			continue;
	}
}

void average_col(double(*p)[COL], int size)
{
	int i, j;
	double subtotl;

	for (i = 0, subtotl = 0; i < size; i++, subtotl = 0)
	{
		for (j = 0; j < COL; j++)
		{
			subtotl += *(*(p + i) + j);
		}
		printf("第 %d 行 求和=%.2lf, 平均数=%.2lf\n", i + 1, subtotl, subtotl / COL);
	}
}

void average(double(*p)[COL], int size)
{
	int i, j;
	double total;

	total = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < COL; j++)
		{
			total += *(*(p + i) + j);
		}
	}

	printf("所有数据求和=%.2lf, 平均数=%.2lf\n", total, total / (COL * size));
}

void find_max(double arr[][COL], int size)
{
	int i, j;
	double max = arr[0][0];

	for (i = 0; i < size; i++)
		for (j = 0; j < COL; j++)
			max = arr[i][j] > max ? arr[i][j] : max;

	printf("最大值是：%.2lf\n", max);
}

void print_arr(double(*p)[COL], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%.2lf\t", *(*(p + i) + j));
		printf("\n");
	}
}
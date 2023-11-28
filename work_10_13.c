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

	printf("��������������£�\n");
	for (i = 0; i < size; i++)
	{
		printf("�������%d������5��double���͵�����:\n", i + 1);
		// scanf ����������ݶ�ȡ������в���Ҫ�����ݣ���Ż����뻺�����ڡ�
		scanf("%lf %lf %lf %lf %lf", *(p + i) + COL - 5,
			*(p + i) + COL - 4, *(p + i) + COL - 3,
			*(p + i) + COL - 2, *(p + i) + COL - 1);
		
		// ����������Ҫ����ʣ������ȫ������
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
		printf("�� %d �� ���=%.2lf, ƽ����=%.2lf\n", i + 1, subtotl, subtotl / COL);
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

	printf("�����������=%.2lf, ƽ����=%.2lf\n", total, total / (COL * size));
}

void find_max(double arr[][COL], int size)
{
	int i, j;
	double max = arr[0][0];

	for (i = 0; i < size; i++)
		for (j = 0; j < COL; j++)
			max = arr[i][j] > max ? arr[i][j] : max;

	printf("���ֵ�ǣ�%.2lf\n", max);
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* create_rand(int num, int min, int max);
void sort(int*, int);
void print_arr(const int*, int);
int main(void)
{
	int num, min, max;
	double* arr;

	printf("请输入要生成多少个随机数：");
	scanf("%d", &num);
	printf("请输入生成随机数的最小值和最大值（空格隔开）：");
	scanf("%d %d", &min, &max);
	arr = create_rand(num, min, max);
	printf("在%d~%d范围内共生成%d个随机数：\n", min, max, num);
	print_arr(arr, num);
	sort(arr, num);
	printf("排序后的结果：\n");
	print_arr(arr, num);
	// 清除内存
	free(arr);
	return 0;
}

int* create_rand(int num, int min, int max)
{
	int i;
	int* arr = (int*)malloc(num * sizeof(int));
	if (arr == NULL)
	{
		printf("分配内存失败\n");
		exit(EXIT_FAILURE);
	}
	// 生成随机数种子
	srand(time(NULL));
	for (i = 0; i < num; i++)
		arr[i] = rand() % max + 1;
	return arr;
}

void sort(int* arr, int size)
{
	int i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
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
void print_arr(const int* arr, int size)
{
	int i = 0;
	
	for (i = 0; i < size; i++)
	{
		printf("%4d", arr[i]);
		if (i % 10 == 9)
			putchar('\n');
	}

	putchar('\n');
}
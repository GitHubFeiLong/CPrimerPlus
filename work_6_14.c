#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 8

int main(void)
{
	double d1s[SIZE], d2s[SIZE], temp;
	int i, j;

	printf("请输入8个double类型的数值：\n");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%lf", &d1s[i]);
		for (j = 0, temp = 0.; j <= i; j++)
		{
			temp = temp + d1s[j];
		}

		d2s[i] = temp;
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("%8.2lf", d1s[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%8.2lf", d2s[i]);
	}

	return 0;
}
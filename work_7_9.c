#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int in, i, j, flag;

	printf("请输入正整数：\n");
	scanf("%d", &in);
	for (i = 2; i <= in; i++)
	{
		for (j = 2, flag = 1; (j * j) <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
			}
		}
		if (flag)
		{
			printf("%d is prime\n", i);
		}
	}

	return 0;
}
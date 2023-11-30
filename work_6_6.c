#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int min, max, i;

	printf("请输入min：");
	scanf("%d", &min);
	printf("请输入max：");
	scanf("%d", &max);

	for (i = min; i <= max; i++)
	{
		printf("整数=%d,平方=%d,立方=%d\n", i, i * i, i * i * i);
	}

	return 0;
}
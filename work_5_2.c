#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LIMIT 10

int main(void)
{
	int input;
	int max;

	printf("请输入一个整数，程序会打印比该数大10的所有整数：\n");
	scanf("%d", &input);
	max = input + LIMIT;
	while (input++ < max)
		printf("%d ", input);

	return 0;
}
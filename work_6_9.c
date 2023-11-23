#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float func(float f1, float f2);

int main(void)
{
	float f1, f2;
	printf("输入两个浮点数，输入q退出程序：\n");
	while (scanf("%f,%f", &f1, &f2) == 2)
	{
		printf("%.2f\n", func(f1, f2));
		printf("输入两个浮点数，输入q退出程序：\n");
	}

	return 0;
}

float func(float f1, float f2)
{
	return (f1 - f2) / (f1 * f2);
}
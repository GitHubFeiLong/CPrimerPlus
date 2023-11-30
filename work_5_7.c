#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lifang(double d);

int main(void)
{
	double input;

	printf("输入 double类型的值：");
	scanf("%lf", &input);
	lifang(input);
	return 0;
}

void lifang(double d)
{
	printf("%lf 的立方 = %f", d, d * d * d);
}
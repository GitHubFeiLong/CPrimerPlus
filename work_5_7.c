#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void lifang(double d);

int main(void)
{
	double input;

	printf("���� double���͵�ֵ��");
	scanf("%lf", &input);
	lifang(input);
	return 0;
}

void lifang(double d)
{
	printf("%lf ������ = %f", d, d * d * d);
}
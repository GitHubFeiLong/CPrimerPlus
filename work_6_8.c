#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float f1, f2;
	printf("��������������������q�˳�����\n");
	while (scanf("%f,%f", &f1, &f2) == 2)
	{
		printf("%.2f\n", (f1 - f2) / (f1 * f2));
		printf("��������������������q�˳�����\n");
	}

	return 0;
}
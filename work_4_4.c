#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float height;
	char name[40];

	printf("��������ߣ���λ��Ӣ�磩���������ԡ�,��������\n");
	scanf("%f,%s", &height, name);
	printf("%s, you are %.3f fee tall", name, height);
	return 0;
}
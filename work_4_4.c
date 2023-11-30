#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float height;
	char name[40];

	printf("请输入身高（单位：英寸）和姓名，以“,”隔开：\n");
	scanf("%f,%s", &height, name);
	printf("%s, you are %.3f fee tall", name, height);
	return 0;
}
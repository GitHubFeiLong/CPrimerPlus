/* input.c -- 何时使用 &*/
/* 使用scanf(),读取基本变量类型的值，变量加上 & */
/* 使用scanf(),把字符串读入字符数组值，不加 & */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;
	float assets;
	char pet[30];
	printf("Enter your age, assets, and favorite pet.\n");
	scanf("%d %f", &age, &assets); // scanf使用空白（换行符 制表符和空格）把输入分成多段。
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
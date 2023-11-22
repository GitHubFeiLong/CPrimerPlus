#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char familyName[10];
	char name[10];
	printf("请输入你的姓：\n");
	scanf("%s", familyName);
	printf("请输入的名：\n");
	scanf("%s", name);
	printf("你的姓名是：%s,%s", name, familyName);
	return 0;
}
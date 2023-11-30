#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstName[40];
	char lastName[40];
	printf("请输入你的名：\n");
	scanf("%s", firstName);
	printf("请输入你的姓：\n");
	scanf("%s", lastName);
	printf("%s %s\n", firstName, lastName);
	printf("%*d %*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));

	printf("%s %s\n", firstName, lastName);
	printf("%-*d %-*d", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));

	return 0;
}
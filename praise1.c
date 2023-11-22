/* praise1.c -- 使用不同类型的字符串 */
#define _CRT_SECURE_NO_WARNINGS // 禁用scanf报错
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("what's your name?");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}

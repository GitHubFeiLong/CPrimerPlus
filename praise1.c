/* praise1.c -- ʹ�ò�ͬ���͵��ַ��� */
#define _CRT_SECURE_NO_WARNINGS // ����scanf����
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

/* scan_str.c -- ʹ��scanf() */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name1[11], name2[11];
	int count;

	printf("Please enter 2 names.\n");
	// �ֱ��ȡ5����10���ַ�
	count = scanf("%5s %10s", name1, name2);
	printf("I read the %d names %s and %s.\n", count, name1, name2);

	return 0;
}
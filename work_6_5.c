#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, rows, k;
	char a = 'A';
	char c;

	printf("�������д��ĸ��");
	scanf("%c", &c);
	rows = (int)c - a;
	for (i = 0; i <= rows; i++, a = 'A')
	{
		for (j = 0; j < rows - i; j++) // ��߿ո��� = ������-��ǰ����
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)  // ���򣬴� 'A' ����
		{
			printf("%c", a++);
		}
		for (j = 0, --a; j < i; j++) // ����
		{
			printf("%c", --a);
		}
		printf("\n");
	}

	return 0;
}
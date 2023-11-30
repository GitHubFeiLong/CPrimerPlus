#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, rows, k;
	char a = 'A';
	char c;

	printf("请输入大写字母：");
	scanf("%c", &c);
	rows = (int)c - a;
	for (i = 0; i <= rows; i++, a = 'A')
	{
		for (j = 0; j < rows - i; j++) // 左边空格数 = 总行数-当前行数
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)  // 升序，从 'A' 自增
		{
			printf("%c", a++);
		}
		for (j = 0, --a; j < i; j++) // 降序
		{
			printf("%c", --a);
		}
		printf("\n");
	}

	return 0;
}
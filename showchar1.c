﻿/* showchar1.c -- 有较大 I/O 问题的程序 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char ch, int lines, int width);
int main(void)
{
	int ch;
	int rows, cols;

	printf("Enter a character and two integers:\n");
	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n') // 跳过回车
			continue;
		printf("Enter another character and two integers;\n");
		printf("Enter a newline to quit.\n");
	}
	printf("Bye.\n");

	return 0;
}

void display(char ch, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(ch);
		putchar('\n');
	}
}
#include <stdio.h>

void print_char(char, int, int);

int main(void)
{
	print_char('A', 10, 5);
	return 0;
}

void print_char(char c, int count, int rowCount)
{
	int row, col;
	for (row = 1; row <= rowCount; row++)
	{
		for (col = 1; col <= count; col++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}
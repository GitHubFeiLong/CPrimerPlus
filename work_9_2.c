#include<stdio.h>

void chline(char, int, int);

int main(void)
{

	chline('*', 10, 10);

	return 0;
}

void chline(char ch, int i, int j)
{
	int row, col;

	for (row = 1; row <= i; row++)
	{
		for (col = 1; col <= j; col++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}
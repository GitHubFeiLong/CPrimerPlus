#include <stdio.h>

int fun(char c);

int main(void)
{
	char c;
	int x, i, j;
	char chs[50];

	for (i = 0, j = 0; i < 50 && (c = getchar()) != EOF; i++, j++)
	{
		chs[i] = c;
	}
	for (i = 0; i < j; i++)
	{
		x = fun(chs[i]);
		printf("%c - %d\n", chs[i], x);
	}

	return 0;
}

int fun(char c)
{
	if (c >= 65 && c <= 90)
		return c - 64;
	else if (c >= 97 && c <= 122)
		return c - 96;
	else
		return -1;
}
#include <stdio.h>

int main(void)
{
	int i, j;
	char c = 'F';

	for (i = 0; i < 6; i++, c = 'F')
	{
		for (j = 0; 0 <= i - j; j++)
		{
			printf("%c", c--);
		}
		printf("\n");
	}

	return 0;
}
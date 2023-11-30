#include <stdio.h>

int main(void)
{
	int i, j;
	char c = 'A';

	for (i = 0; i < 6; i++)
	{
		for (j = 0; i - j >= 0; j++)
		{
			printf("%c", c++);
		}
		printf("\n");
	}
	return 0;
}
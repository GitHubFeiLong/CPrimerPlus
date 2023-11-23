#include <stdio.h>
#define SYMBNLE '$'

int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; 0 <= i - j; j++)
		{
			printf("%c", SYMBNLE);
		}
		printf("\n");
	}

	return 0;
}
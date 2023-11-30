#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, r, j;
	int total = 1000;
	
	
	for (j = 0; j < 10; j++)
	{
		srand(j);
		int count_arr[10] = { 0 };
		for (i = 0; i < total; i++)
		{
			r = rand() % 10 + 1;

			count_arr[r - 1] += 1;
		}

		for (i = 0; i < 10; i++)
		{
			printf("%4d", count_arr[i]);
		}
		putchar('\n');
	}

	
	return 0;
}

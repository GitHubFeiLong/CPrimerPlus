#include <stdio.h>
#define SIZE 26
int main(void)
{
	char zms[SIZE];
	int index;

	for (index = 0; index < SIZE; index++)
	{
		zms[index] = 'a' + index;

		printf("%c ", zms[index]);
	}


	return 0;
}
#include <stdio.h>

int main(void)
{
	char cstart = 'a';
	char cend = 'g';
	char current = cstart;
	while (current <= cend)
	{
		printf("%2c", current);
		current++;
	}

	return 0;
}
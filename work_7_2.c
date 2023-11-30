#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;
	int i = 1;

	while ((ch = getchar()) != '#')
	{
		if (i % 9 == 0)
		{
			printf("\n%c-%d\t", ch, ch);
			i = 1;
		} 
		else
		{
			printf("%c-%d\t", ch, ch);
			i++;
		}
	}

	return 0;
}
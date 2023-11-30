#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch, preCh = ' ';
	int ecount = 0, icount = 0, eicount = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			ecount++;
		}
		else if (ch == 'i')
		{
			icount++;
		}
		if (preCh == 'e' && ch == 'i')
		{
			eicount++;
		}

		preCh = ch;
	}
	printf("ecount = %d; icount = %d, eicount = %d", ecount, icount, eicount);

	return 0;
}
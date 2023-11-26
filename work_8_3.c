#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int unum = 0, lnum = 0;
	char ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			unum++;
		else if (ch >= 'a' && ch <= 'z')
			lnum++;
	}
	printf("upper number: %d\nlower number: %d", unum, lnum);

	return 0;
}
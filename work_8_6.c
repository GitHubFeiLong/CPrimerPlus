#include <stdio.h>
#include <ctype.h>

char get_first(void);
int main(void)
{
	printf("%c", get_first());
	return 0;
}

char get_first(void)
{
	char c;

	while (isspace((c = getchar())))
		continue;
	return c;
}
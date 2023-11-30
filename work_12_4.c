#include <stdio.h>
static int total;
unsigned int fun();

int main(void)
{
	int i = 0;

	while (i < 6 && ++i)
		printf("%d\n", fun());

	return 0;
}

unsigned int fun()
{
	return ++total;
}

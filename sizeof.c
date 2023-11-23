/* sizeof.c --Ê¹ÓÃsizeofÔËËã·û */
#include <stdio.h>

int main(void)
{
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);

	return 0;
}
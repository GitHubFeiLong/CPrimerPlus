#include <stdio.h>

int main(void)
{
	int total = 0;
	char c;

	while ((c = getchar()) != EOF)
		total++;
	printf("%d", total);

	return 0;
}
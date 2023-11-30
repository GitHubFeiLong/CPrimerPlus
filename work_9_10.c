#include <stdio.h>

void to_binary(int num, int r);

int main(void)
{
	to_binary(15, 8);
	return 0;
}

void to_binary(int num, int r)
{
	int n1;

	n1 = num % r;
	if (num >= r)
		to_binary(num / r, r);

	putchar('0' + n1);
}
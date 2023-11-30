#include <stdio.h>
#include "s_gets.h"

int main(void)
{
	char ct[40];
	printf("Enter:\n");
	s_gets_1(ct, 40);
	puts(ct);
	return 0;
}


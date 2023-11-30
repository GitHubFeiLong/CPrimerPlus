#include <stdio.h>
#include <string.h>
#include "s_gets.h"

int my_strlen(const char* string);

int main(void)
{
	char c[40];

	puts("Enter:");
	s_gets_1(c, 40);
	puts(c);
	printf("strlen=%d,my_strlrn=%d",
		strlen(c), my_strlen(c));

	return 0;
}

int my_strlen(const char* string)
{
	int count = 0;

	while (*string++)
	{
		count++;
	}

	return count;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float f;

	scanf("%f", &f);
	printf("The input is %.1f or %.1e.\n", f, f);
	printf("The input is %+.3f or %.3E", f, f);
	return 0;
}
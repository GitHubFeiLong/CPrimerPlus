#include <stdio.h>
void one_three(void); // ANSI/ISO Cº¯ÊýÔ­ÐÍ
void two(void);

int main(void)
{
	printf("starting now:");
	printf("\n");
	one_three();
	printf("done!");

	return 0;
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("\n");
	printf("three\n");
}

void two(void)
{
	printf("tow");
}
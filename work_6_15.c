#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 255
int main(void)
{
	char ch[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		scanf("%c", &ch[i]);
	}

	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("%c", ch[i]);
	}

	return 0;
}
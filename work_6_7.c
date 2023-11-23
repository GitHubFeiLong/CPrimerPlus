#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[40];
	int i;

	scanf("%s", ch);
	i = strlen(ch);
	for (; i >= 0; i--)
	{
		printf("%c", ch[i]);
	}

	return 0;
}
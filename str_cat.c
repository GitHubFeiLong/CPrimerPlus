/* str_cat.c -- Æ´½ÓÁ½¸ö×Ö·û´®*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 80
char* s_gets_bak(char* st, int n);

int main(void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	puts("What is your favorite flower?");
	if (s_gets_bak(flower, SIZE))
	{
		printf("%p\n", flower);
		strcat(flower, addon);
		printf("%p\n", flower);
		puts(flower);
		puts(addon);
	}
	else
		puts("End of file encountered!");
	puts("bye");

	return 0;
}

char* s_gets_bak(char* st, int n)
{
	char* ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
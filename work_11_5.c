#include <stdio.h>
#include <ctype.h>
#include "s_gets.h"

char* findptr(const char * string, char c);
char* s_1gets(char* string, int num);

int main(void)
{
	char c;
	char str[20];
	char* fptr;

	do
	{
		printf("请输入字符串：\n");
		s_gets(str, 20);
		printf("请输入要查找的字符：\n");
		while (isspace(c = getchar()))
			printf("Warning %c 不是一个字符", c);
		fptr = findptr(str, c);
		//printf("%s\n", fptr);
	} while (1);

	return 0;
}

char* findptr(const char* string, char c)
{
	while (*string != c)
		string++;

	return string;
}
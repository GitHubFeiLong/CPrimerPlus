#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;
	int count1 = 0;
	int count2 = 1;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			count1++;
		}
		else if (ch == '!')
		{
			putchar('!');
			putchar('!');
			count2++;
		}
		else
		{
			putchar(ch);
		}
	}

	printf("\n一共执行了%d次'.'替换，执行了%d次'!'替换.\n", count1, count2);

	return 0;
}
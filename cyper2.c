#include <stdio.h>
#include <ctype.h> // 包含isalpha()的函数原型

int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch)) // 如果ch是一个字母返回非零值，否则返回0.
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);

	return 0;
}
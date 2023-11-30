#include <stdio.h>

int main(void)
{
	char c;
	int num = 0;

	while ((c = getchar()) != EOF)
	{

		if (++num <= 10)
		{
			num = 0;
			putchar('\n');
		}
		
		switch (c)
		{
		case '\r':
			putchar('\\');
			putchar('r');
			break;
		case '\t':
			putchar('\\');
			putchar('t');
			break;
		case '\n':
			putchar('\\');
			putchar('n');
			break;
		default:
			if (c < ' ')
			{
				// .... 非打印字符 https://www.runoob.com/w3cnote/ascii.html
			}
			else
			{
				putchar(c);
			}
			break;
		}
		
	}

	return 0;
}
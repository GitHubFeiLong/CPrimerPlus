#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	scanf("%c", &ch); 
	while (ch != 'g')
	{
		printf("%c", ++ch); // 打印字符后面一个字符。
		scanf("%c", &ch); // 接着读字符放入ch变量中
	}

	return 0;
}
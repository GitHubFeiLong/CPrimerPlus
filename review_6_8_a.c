#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	// 输入 “Go west, young man!”
	// 输出 “Go west, youn”
	scanf("%c", &ch); // 读取第一个字符
	while (ch != 'g')
	{
		printf("%c", ch);
		scanf("%c", &ch); // 会接着读取后续字符到ch变量中，直到空白符（换行）
	}

	return 0;
}
/* work9.c -- 第9题代码 */
#include <stdio.h>

int main(void)
{
	// '\r'是回车符，ASCII 值是13
	char ch;

	ch = '\r'; // 转义序列
	ch = 13; // 十进制值
	ch = '\015'; // 八进制字符常量
	ch = '\0xd'; // 十六进制字符常量
	return 0;
}
/* echo_eof.c -- 重复输入，直到文件结尾 */
#include <stdio.h>

int main(void)
{
	int ch;

	// UNIX/Linux 使用Ctrl+D传输文件结尾信号
	// Windows 正确使用是 Enter,Ctrl+Z,Enter
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
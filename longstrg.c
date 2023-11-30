/* longstrg.c --打印较长的字符串  */
#include <stdio.h>
int main(void)
{
	int len = printf("Here's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n"); // '\'字符换行不要使用缩进，会将缩进当成打印字符打印！
	printf("Here's the newest way to print a "
		"long string.\n"); // ANSI C 两个双引号括起来的字符串之间用空白隔开，C编译器会把多个字符串看作是一个字符串。

	return 0;
}
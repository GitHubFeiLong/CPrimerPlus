/* put1.c -- 打印字符串，不添加\n */
#include <stdio.h>

void put1(const char* string); // 不会改变字符串

int main(void)
{

	return 0;
}

void put1(const char* string)
{
	while (*string != '\0')
		putchar(*string++); // 一元运算从右到左，先执行string++,*string还是执行++前的值。
}

void put2(const char* string)
{
	while (*string) /* 当string指向空字符'\0'时 `*string`的值是0 */
		putchar(*string++); // 一元运算从右到左，先执行string++
}
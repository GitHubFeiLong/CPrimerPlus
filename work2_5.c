/* work5.c 打印输出 */
#include <stdio.h>
void br(void); // ANSI/ISO C函数原型（函数声明）
void ic(void); 

int main(void)
{
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	return 0;
}

void br(void)
{
	printf("Brazil, Russia");
}

void ic(void)
{
	printf("India, China");
}
/* work4.c -- 指定输出内容 */
#include <stdio.h>
void jolly(void); // ANSI/ISO C函数原型（也叫函数声明）
void deny(void); // ANSI/ISO C函数原型（也叫函数声明）

int main(void)
{
	jolly(); // 函数调用
	deny(); // 函数调用

	return 0;
}

// 函数定义
void jolly(void)
{
	printf("Fir he's a jolly good fellow!\n");
	printf("Fir he's a jolly good fellow!\n");
	printf("Fir he's a jolly good fellow!\n");
}

// 函数定义
void deny(void)
{
	printf("Which nobody can deny!\n");
}
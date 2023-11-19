#include <stdio.h>
void printSmile(void); // ANSI/ISO C函数原型（函数声明）

int main(void)
{
	printSmile();
	printSmile();
	printSmile();
	printf("\n");
	printSmile();
	printSmile();
	printf("\n");
	printSmile();
	return 0;
}

void printSmile(void)
{
	printf("Smilde!");
}
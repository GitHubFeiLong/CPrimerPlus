#include <stdio.h>

int main(void)
{
	int i = 0;

	// 打印完三次“Hi！”后i=4
	while (++i < 4)
		printf("Hi! ");
	
	// 打印5次“Bye! ”后i=8
	do
		printf("Bye! ");
	while (i++ < 8);

	return 0;
}
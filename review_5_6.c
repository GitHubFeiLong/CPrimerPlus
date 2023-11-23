/* review_5_6.c -- 第5章复习题中的第6题 */
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"

int main(void)
{
	int num = 10;

	printf(FORMAT, FORMAT);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num--);
	printf("%d\n", num);

	return 0;
}
/* convertAge2Days.c -- 将年龄转换成天数，不考虑闰年 */
#include <stdio.h>

int main(void)
{
	int age, days;
	age = 27;
	days = age * 365;
	printf("age=%d,days=%d", age, days);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define WEEK_DAYS 7
int main(void)
{
	int day;
	int weeks, days;

	printf("输入天数:\n");
	scanf("%d", &day);

	while (day > 0)
	{
		weeks = day / WEEK_DAYS;
		days = day % WEEK_DAYS;
		printf("%d days are %d weeks, %d days\n", day, weeks, days);
		printf("输入天数:\n");
		scanf("%d", &day);
	}
	
	printf("Done!\n");

	return 0;
}
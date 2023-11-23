/* min_sec.c -- 把秒数转换成分和秒 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MIN 60 // 1分钟60秒

int main(void)
{
	int sec, min, left;
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec); // 读取秒数
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}

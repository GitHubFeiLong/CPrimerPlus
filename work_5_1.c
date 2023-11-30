#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 60

int main(void)
{
	int totalMin;
	printf("输入分钟时间(输入值小于或等于0时退出程序)：\n");
	scanf("%d", &totalMin);
	while (totalMin > 0)
	{
		int hour = totalMin / SIZE; // 时
		int min = totalMin % SIZE; // 分
		printf("hout:%d,min=%d\n", hour, min);
		printf("输入分钟时间(输入值小于或等于0时退出程序)：\n");
		scanf("%d", &totalMin);
	}
	printf("Done!\n");

	return 0;
}

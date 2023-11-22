#include <stdio.h>

int main(void)
{
	int age;
	float seconds = 3.156e7; // 3.156 * 10000000

	printf("输入你的年龄：");
	scanf_s("%d", &age);
	printf("\n你今年%d岁，存活了%.f秒", age, seconds * age);
	return 0;
}
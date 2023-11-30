/* work2.c -- 输入一个ASCII，打印输入的字符 */
#include <stdio.h>

int main(void)
{
	int num;
	printf("请输入一个有效的ASCII值：");
	scanf_s("%d", &num);
	printf("你输入的字符是：%c", (char)num);

	return 0;
}
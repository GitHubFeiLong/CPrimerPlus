﻿/* guess.c -- 一个拖沓且错误的猜数字程序 */
#include <stdio.h>
int main(void)
{
	int guess = 1;
	char response;

	printf("Pick an integer form 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?", guess);
	while ((response = getchar()) != 'y')
	{
		if (response == 'n')
			printf("Well, then, is it %d?\n", ++guess);
		else
			printf("Sorry, I understand only y or n.\n");
		while (getchar() != '\n') // 读取剩余其它输入 no,no way 回车。
			continue;
	}
	printf("I knuw I could do it\n");

	return 0;
}
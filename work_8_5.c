#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int guessNum = 50;
	int min = 1;
	int max = 100;
	char c;
	bool guessSure = 0;

	printf("请您准备一个1-100的整数，我说出一个数字，"
		"你回答大了（b）或 小了（x）正确（s）,"
		"按下q退出程序");

	while (!guessSure)
	{
		printf("你准备的是：%d?", guessNum);
		while (scanf("%c", &c) != 1)
		{
			
		}
		switch (c)
		{
		case 'b':
			max = guessNum;
			guessNum = guessNum - (guessNum - min) / 2;
			break;
		case 'x':
			min = guessNum;
			guessNum = (max - guessNum) / 2 + guessNum;
			break;
		case 's':
			printf("猜测正确%d\n", guessNum);
			guessSure = 1;
			break;
		case 'q':
			goto A;
			break;
		default:
			printf("%c 是一个错误的选项,请重新输入，大了（b）或 小了（x）或按下q退出程序：", c);
			break;
		}
	}
	A:
	printf("Bye!\n");

	return 0;
}
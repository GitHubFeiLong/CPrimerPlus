#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void showmenu(void);
int getchoice(int min, int max);

int main(void)
{
	int min, max;
	int r;

	showmenu();
	while ((r = getchoice(1, 4)) != 4)
	{
		printf("显示菜单：\n");
		showmenu();
	}
	printf("Bye!\n");

	return 0;
}

void showmenu(void)
{
	int choice;
	int status;

	printf("Please choose one of the following:\n");
	printf("1) copy files		2)move files\n");
	printf("3) remove files		4)quit\n");
	printf("Enter the number of your choice:\n");
}

int getchoice(int min, int max)
{
	int i;
	int flag;

	printf("Enter the number:\n");
	flag = scanf("%d", &i);
	while (flag && !(i >= min || i <= max))
	{
		showmenu();
		flag = scanf("%d", &i);
	}
	// 读取剩余的字符
	if (flag != 1)
		return 4;

	return i;
}
/*�ܱ�4�����������ܱ�100���������ܱ�400���������Ϊ���ꣻ����Ϊƽ�ꡣ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "s_gets.h"

struct month
{
	char name[10];
	char abbrev[4];
	int days;
	int monumb;
};

const struct month months[12] = {
	{"January", "Jan", 31, 1},
	{"February", "Feb", 28, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sep", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12}
};

int days();

int main(void)
{
	int year;
	char month[10];
	char c;

	printf("�������� q to quit.��");
	while (scanf("%d", &year) == 1)
	{
		if ((c = getchar()) != '\n')
		{
			printf("1%c", c);
			continue;
		}
		printf("�������£�");
		s_gets(month, 10);
		printf("�������£�");
	}
	scanf("%d-%d-%d", &year);
	printf("year = %d", year);

	return 0;
}

int days()
{
}
/*�ܱ�4�����������ܱ�100���������ܱ�400���������Ϊ���ꣻ����Ϊƽ�ꡣ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
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

int days(int year, char * month, int day);

_Bool year_is_leap_year(int year);

const struct month* get_month(char* month);

int main(void)
{
	int year;
	char month[10];
	int day;
	int totaldays;

	printf("�������� q to quit.��");
	while (scanf("%d", &year) == 1)
	{
		cleanchar();
		printf("�������£�");
		s_gets(month, 10);
		printf("�������գ�");
		scanf("%d", &day);
		cleanchar();
		totaldays = days(year, month, day);
		printf("%d-%s-%d��%d\n", year, month, day, totaldays);
		printf("�������� q to quit.��");
	}
	printf("Bye.\n");

	return 0;
}

int days(int year, char* month, int day)
{
	_Bool isLeapYear;
	int index;
	int totaldays = 0;

	isLeapYear = year_is_leap_year(year);
	struct month* pm = get_month(month);
	// ����ֻ��������ĩ
	for (index = 1; index < pm->monumb; index++)
	{
		if (index == 2)
			totaldays = totaldays + (isLeapYear ? 28 : 29);
		else
			totaldays += months[index - 1].days;
	}

	// �����������
	totaldays += day;

	return totaldays;
}

const struct month* get_month(char* month)
{
	int i;
	const struct month* pm = NULL;
	// �ж���������� ���ֻ��Ǽ�д��ĸ����������ĸ
	if (isdigit(month[0]))
	{
		int intmonth = atoi(month);

		if(intmonth >= 1 && intmonth <= 12)
			pm = &months[intmonth - 1];
	}
	else
	{
		month[0] = toupper(month[0]);
		for (i = 1; month[i] != '\0'; i++)
			month[i] = tolower(month[i]);
		for (i = 0; i < 12; i++)
		{
			if (strcmp(months[i].name, month) == 0)
			{
				pm = &months[i];
				break;
			}
			if (strcmp(months[i].abbrev, month) == 0)
			{
				pm = &months[i];
				break;
			}
		}
	}

	if (pm == NULL)
		fprintf(stderr, "�Ҳ�����:%s", month);

	return pm;
}

_Bool year_is_leap_year(int year)
{
	/*�ܱ�4�����������ܱ�100���������ܱ�400���������Ϊ���ꣻ����Ϊƽ�ꡣ*/
	_Bool flag = 0;
	if (year % 4 == 0 && year % 100 == 0)
		flag = 1;
	else if (year % 400 == 0)
		flag = 1;
	return flag;
}
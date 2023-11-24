#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define TYPE_1_MONEY 17850
#define TYPE_2_MONEY 23900
#define TYPE_3_MONEY 29750
#define TYPE_4_MONEY 14875
#define TYPE_1_HAND (TYPE_1_MONEY * RATE1)
#define TYPE_2_HAND (TYPE_2_MONEY * RATE1)
#define TYPE_3_HAND (TYPE_3_MONEY * RATE1)
#define TYPE_4_HAND (TYPE_4_MONEY * RATE1)

int main(void)
{
	int type;
	float salary;
	float sj;

	do
	{
		printf("\n******************************\n");
		printf("1）单身\t\t\t\t2) 户主\n");
		printf("3）已婚，共有\t\t\t4) 已婚，离异\n");
		printf("5）退出\n");
		printf("******************************\n\n");
		printf("请输入用户类型：");
		scanf("%d", &type);
		if (type == 5)
			continue;
		printf("请输入你的薪资：");
		scanf("%f", &salary);
		switch (type)
		{
		case 1:
			if (salary <= TYPE_1_MONEY)
			{
				sj = salary * RATE1;
			} 
			else
			{
				sj = TYPE_1_HAND + (salary - TYPE_1_MONEY) * RATE2;
			}
			break;
		case 2:
			if (salary <= TYPE_2_MONEY)
			{
				sj = salary * RATE1;
			}
			else
			{
				sj = TYPE_2_HAND + (salary - TYPE_2_MONEY) * RATE2;
			}
			break;
		case 3:
			if (salary <= TYPE_3_MONEY)
			{
				sj = salary * RATE1;
			}
			else
			{
				sj = TYPE_3_HAND + (salary - TYPE_3_MONEY) * RATE2;
			}
			break;
		case 4:
			if (salary <= TYPE_4_MONEY)
			{
				sj = salary * RATE1;
			}
			else
			{
				sj = TYPE_4_HAND + (salary - TYPE_4_MONEY) * RATE2;
			}
			break;
		}
		printf("税金：%.2f\n请继续输入...\n", sj);
	} while (type != 5);
	printf("Bye!\n");

	return 0;
}
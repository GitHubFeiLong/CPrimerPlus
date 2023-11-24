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
		printf("1������\t\t\t\t2) ����\n");
		printf("3���ѻ飬����\t\t\t4) �ѻ飬����\n");
		printf("5���˳�\n");
		printf("******************************\n\n");
		printf("�������û����ͣ�");
		scanf("%d", &type);
		if (type == 5)
			continue;
		printf("���������н�ʣ�");
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
		printf("˰��%.2f\n���������...\n", sj);
	} while (type != 5);
	printf("Bye!\n");

	return 0;
}
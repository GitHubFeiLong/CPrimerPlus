#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define FOOD1 2.05
#define FOOD2 1.15
#define FOOD3 1.09
#define FREIGHT1 6.5
#define FREIGHT2 14
#define FREIGHT3 0.5
#define DISCOUNT 0.05

void printMenu(void);

int main(void)
{
	char type;
	int flag = 0;
	float f1 = 0.0F;
	float f2 = 0.0F;
	float f3 = 0.0F;
	float f1Total = 0.0F;
	float f2Total = 0.0F;
	float f3Total = 0.0F;
	float allTotal = 0.0F;
	float allAmount = 0.0F;
	float zk;
	float allFright;

	printMenu();
	while (scanf("%c", &type) && type != 'q')
	{
		if (!flag)
			flag = 1;
		switch (type)
		{
		case 'a':
			printf("����������($%.2f/��)�İ���:", FOOD1);
			scanf("%f", &f1);
			f1Total += f1;
			break;
		case 'b':
			printf("���������($%.2f/��)�İ���:", FOOD2);
			scanf("%f", &f2);
			f2Total += f2;
			break;
		case 'c':
			printf("��������ܲ�($%.2f/��)�İ���:", FOOD3);
			scanf("%f", &f3);
			f3Total += f3;
			break;
		default:
			continue;
		}
		printMenu();
	}
	if (flag)
	{
		printf("��ѡ������Ʒ���£�\n");
		if (f1Total > 0)
		{
			allAmount += f1Total * FOOD1;
			printf("����($%.2f/��)%.2f��\n", FOOD1, f1Total);
		}
		if (f2Total > 0)
		{
			allAmount += f2Total * FOOD2;
			printf("���($%.2f/��)%.2f��", FOOD2, f2Total);
		}
		if (f3Total > 0)
		{
			allAmount += f3Total * FOOD3;
			printf("���ܲ�($%.2f/��)%.2f��", FOOD3, f3Total);
		}

		// �ܰ���
		allTotal = f1Total + f2Total + f3Total;
		if (allAmount >= 100)
		{
			allAmount *= DISCOUNT;
		}

		if (allTotal <= 5)
		{
			allAmount += FREIGHT1;
		}
		else if (allTotal <= 20)
		{
			allAmount += FREIGHT2;
		}
		else
		{
			allAmount += FREIGHT2 + (allTotal - 20) * FREIGHT3;
		}
	}
	

	return 0;
}

void printMenu(void)
{
	printf("*****************************\n");
	printf("a) ����($%.2f/��)\t\t", FOOD1);
	printf("b) ���($%.2f/��)\n", FOOD2);
	printf("c) ���ܲ�($%.2f/��)\t\t", FOOD3);
	printf("q) �˳�\n");
	printf("*****************************\n");
}
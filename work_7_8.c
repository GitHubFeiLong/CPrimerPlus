#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define HOUR 40
#define D1 1.5
#define FRONT1 300
#define FRONT2 150
#define FRONT3 450
#define SL1 0.15
#define SL2 0.2
#define SL3 0.25
#define BASE1 (FRONT1 * SL1)
#define BASE2 (BASE1 + FRONT2 * SL2)

void handler(float f1, float f2);

int main(void)
{
	float weekWorkHours; // һ�ܹ���Сʱ��
	float hr;
	int command; // ָ��
	int status;

	do {
		printf("*****************************\n\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $$8.75/hr\t\t\t");
		printf("2) $$9.33/hr\n");
		printf("3) $$10.00/hr\t\t\t");
		printf("4) $$11.20/hr\n");
		printf("5) quit\n");
		printf("*****************************\n\n");
		status = scanf("%d", &command);
		if (status != 1)
		{
			printf("������������ȷ��ֵ\n");
			continue;
		}
		switch (command)
		{
		case 1:
			hr = 8.75;
			break;
		case 2:
			hr = 9.33;
			break;
		case 3:
			hr = 10.00;
			break;
		case 4:
			hr = 11.20;
			break;
		default:
			goto ext;
		}
		printf("��������һ���ܹ�����Сʱ��:\n");
		scanf("%f", &weekWorkHours);

		handler(hr, weekWorkHours);
	} while (command != 5);
	ext:
	printf("Bye!");
	
	return 0;
}

void handler(float basic, float weekWorkHours)
{
	
	float salary; // �����ܶ�
	float sj; // ˰��

	// ��������ʱ��û�мӰ��
	if (weekWorkHours <= HOUR)
	{
		salary = weekWorkHours * basic;
	}
	else
	{
		// ǰ40Сʱн�� + �Ӱ๤��
		salary = (basic * HOUR) + (weekWorkHours - HOUR) * D1 * basic;
	}

	// ����˰��
	if (salary <= FRONT1)
	{
		// ˰��
		sj = SL1 * salary;
	}
	else if (salary <= FRONT3)
	{
		sj = BASE1 + (salary - FRONT1) * SL2;
	}
	else {
		sj = BASE2 + (salary - FRONT3) * SL3;
	}

	printf("�ܹ��� %.2f Сʱ��\n", weekWorkHours);
	printf("�����ܽ��\t\t˰��\t\t������\n");
	printf("%.2f\t\t\t%.2f\t\t%.2f\n\n", salary, sj, salary - sj);
}
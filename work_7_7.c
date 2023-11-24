#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BASIC 10.00
#define HOUR 40
#define SALARY1 (BASIC * HOUR)
#define D1 1.5
#define FRONT1 300
#define FRONT2 150
#define FRONT3 450
#define SL1 0.15
#define SL2 0.2
#define SL3 0.25
#define BASE1 (FRONT1 * SL1)
#define BASE2 (BASE1 + FRONT2 * SL2)

int main(void)
{
	float weekWorkHours; // һ�ܹ���Сʱ��
	float salary; // �����ܶ�
	float sj; // ˰��

	printf("��������һ���ܹ�����Сʱ��:\n");
	scanf("%f", &weekWorkHours);

	// ��������ʱ��û�мӰ��
	if (weekWorkHours <= HOUR)
	{
		salary = weekWorkHours * BASIC;
	} 
	else
	{
		// ǰ40Сʱн�� + �Ӱ๤��
		salary = SALARY1 + (weekWorkHours - HOUR) * D1 * BASIC;
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
	printf("%.2f\t\t\t%.2f\t\t%.2f", salary, sj, salary - sj);
	
	return 0;
}
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
	float weekWorkHours; // 一周工作小时数
	float salary; // 工资总额
	float sj; // 税金

	printf("请输入你一个周工作的小时数:\n");
	scanf("%f", &weekWorkHours);

	// 正常工作时间没有加班费
	if (weekWorkHours <= HOUR)
	{
		salary = weekWorkHours * BASIC;
	} 
	else
	{
		// 前40小时薪资 + 加班工资
		salary = SALARY1 + (weekWorkHours - HOUR) * D1 * BASIC;
	}

	// 计算税率
	if (salary <= FRONT1)
	{
		// 税率
		sj = SL1 * salary;
	}
	else if (salary <= FRONT3)
	{
		sj = BASE1 + (salary - FRONT1) * SL2;
	}
	else {
		sj = BASE2 + (salary - FRONT3) * SL3;
	}

	printf("周工作 %.2f 小时：\n", weekWorkHours);
	printf("工资总金额\t\t税金\t\t净收入\n");
	printf("%.2f\t\t\t%.2f\t\t%.2f", salary, sj, salary - sj);
	
	return 0;
}
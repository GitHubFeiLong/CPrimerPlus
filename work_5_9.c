#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Temperatures(double hswd);

int main(void)
{
	double hswd;
	int scanfR;

	printf("输入华氏温度：");
	while ((scanf("%lf", &hswd)) == 1)
	{
		Temperatures(hswd);
	}
	return 0;
}

void Temperatures(double hswd)
{
	const float f1 = 5.0;
	const float f2 = 9.0;
	const float f3 = 32.0;
	const float f4 = 273.16;
	float sswd;
	float kswd;

	// 摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
	sswd = f1 / f2 * (hswd - f3);
	// 开氏温度 = 摄氏温度 + 273.16
	kswd = sswd + f4;

	printf("华氏温度：%.2f，摄氏温度：%.2f，开式温度：%.2f\n", hswd, sswd, kswd);
}
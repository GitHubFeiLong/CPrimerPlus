#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Temperatures(double hswd);

int main(void)
{
	double hswd;
	int scanfR;

	printf("���뻪���¶ȣ�");
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

	// �����¶� = 5.0 / 9.0 * (�����¶� - 32.0)
	sswd = f1 / f2 * (hswd - f3);
	// �����¶� = �����¶� + 273.16
	kswd = sswd + f4;

	printf("�����¶ȣ�%.2f�������¶ȣ�%.2f����ʽ�¶ȣ�%.2f\n", hswd, sswd, kswd);
}
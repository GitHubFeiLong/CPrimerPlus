#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCH 2.54 // 1Ӣ�� = 2.54cm
#define FEET 30.48 // 1Ӣ�� = 30.48cm

int main(void)
{
	float height, heightYC1, heightYC2; // ������׵�λ��1cm�������Ӣ�絥λ��2.54cm�������Ӣ�ߵ�λ(30.48cm)
	printf("Enter a height in centimeters��");
	scanf("%f", &height);

	while (height > 0)
	{
		heightYC1 = height / INCH;
		heightYC2 = height / FEET;
		printf("%.1f cm = %.f feet, %.1f inches\n", height, heightYC2, heightYC1);

		printf("Enter a height in centimeters��");
		scanf("%f", &height);
	}
	return 0;
}
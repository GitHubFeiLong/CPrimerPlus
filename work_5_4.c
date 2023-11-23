#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCH 2.54 // 1英寸 = 2.54cm
#define FEET 30.48 // 1英尺 = 30.48cm

int main(void)
{
	float height, heightYC1, heightYC2; // 身高厘米单位（1cm），身高英寸单位（2.54cm），身高英尺单位(30.48cm)
	printf("Enter a height in centimeters：");
	scanf("%f", &height);

	while (height > 0)
	{
		heightYC1 = height / INCH;
		heightYC2 = height / FEET;
		printf("%.1f cm = %.f feet, %.1f inches\n", height, heightYC2, heightYC1);

		printf("Enter a height in centimeters：");
		scanf("%f", &height);
	}
	return 0;
}
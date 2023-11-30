#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input, i;
	float sum;
	input = 1;

	while (input > 0)
	{
		printf("输入整数：");
		scanf("%d", &input);
		if (input <= 0)
			break;
		sum = 0.;
		for (i = 1; i <= input; i++)
		{
			sum += 1.0 / i;
		}
		for (i = 1; i <= input; i++)
		{
			sum += (i % 2 == 0 ? -1 : 1) * 1.0 / i;
		}
		printf("sum = %lf\n", sum);
	}
	


	return 0;
}
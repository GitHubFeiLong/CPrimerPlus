#include <stdio.h>
#define AMOUNT 100
#define DA_LX 0.1
#define DE_LX 0.05

int main(void)
{
	int countYears = 0;
	float daTotalAmount = AMOUNT, deTotalAmount = AMOUNT;

	do
	{
		countYears++;
		daTotalAmount += AMOUNT * DA_LX;
		deTotalAmount += deTotalAmount * DE_LX;

	} while (daTotalAmount > deTotalAmount);

	printf("%d years da:%lf, de:%lf", countYears, deTotalAmount, deTotalAmount);

	return 0;
}
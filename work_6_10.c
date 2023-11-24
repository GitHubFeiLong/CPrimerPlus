#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, sum, min, max;
	sum = 0;
	min = 1;
	max = 2;
	
	while (max > min)
	{
		printf("Enter lower and upper integer limits:");
		scanf("%d %d", &min, &max);
		if (max <= min)
			break;

		for (i = min; i <= max; i++)
		{
			sum = sum + i * i;
		}
		printf("The sums of the squares from %d to %d is %d\n", min, max, sum);
		sum = 0;
	}
	printf("Done");

	return 0;
}
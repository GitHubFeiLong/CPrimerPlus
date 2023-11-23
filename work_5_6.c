#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int days;
	int cd = 0;
	int total = 0;

	scanf("%d", &days);

	while (cd++ < days)
	{
		total = total + cd * cd;
	}
	printf("%d days, %d money", days, total);
	return 0;
}
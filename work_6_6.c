#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int min, max, i;

	printf("������min��");
	scanf("%d", &min);
	printf("������max��");
	scanf("%d", &max);

	for (i = min; i <= max; i++)
	{
		printf("����=%d,ƽ��=%d,����=%d\n", i, i * i, i * i * i);
	}

	return 0;
}
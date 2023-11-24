#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 8

int main(void)
{
	int i, nums[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &nums[i]);
		nums[i] = nums[i] * 256;
	}

	i = 0;
	do {
		printf("%d ", nums[i]);
	} while (++i < SIZE);


	return 0;
}
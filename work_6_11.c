#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 8

int main(void)
{
	int nums[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
		scanf("%d", &nums[i]);

	for (i = SIZE - 1; i >= 0; i--)
		printf("%d ", nums[i]);

	return 0;
}
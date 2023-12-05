#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "s_gets.h"
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void sortt(struct book * pb[], int n);
void sortv(struct book* pb[], int n);
void sortn(int nums[], int n);
int main(void)
{
	int nums[] = {1, 3, 2, 7, 3, 5, 9};
	sortn(nums, sizeof(nums) / sizeof(nums[0]));
	return 0;
}

void sortn(int nums[], int n)
{
	int i, j, temp;

	for(i = 0; i < n - 1; i++)
		for (j = i; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}

	for (i = 0; i < n - 1; i++)
		printf("%4d", nums[i]);
}

void sortt(struct book* pb[], int n)
{
	int i, j;
	struct book* temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i; j < n - i - 1; j++)
		{
			if (strcmp(pb[j]->title, pb[j + 1]->title) > 0)
			{
				temp = pb[j];
				pb[j] = pb[j + 1];
				pb[j + 1] = temp;
			}
		}
	}
}

void sortv(struct book* pb[], int n)
{

}
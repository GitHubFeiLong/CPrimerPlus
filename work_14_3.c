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
void printbooks(struct book* pb[], int n);

int main(void)
{
	int count = 0;
	struct book * books[MAXBKS];

	s_gets((*(books + count))->title, MAXTITL);

	printf("请输入书名(空行退出录入书本)：");
	while (count < MAXBKS
		&& s_gets((*(books + count))->title, MAXTITL)
		&& (*(books + count))->title[0] != '\0')
	{
		printf("请输入作者：");
		s_gets((*(books + count))->author, MAXAUTL);
		printf("请输入价钱：");
		scanf("%f", (*(books + count))->value);
		cleanchar();
		count++;
		printf("请输入书名(空行退出录入书本)：");
	}
	printf("1. 按照录入排序");
	printbooks(books, count);

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

void printbooks(struct book* pb[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%s by %s:$%.2f\n", pb[i]->title, pb[i]->author, pb[i]->value);
}
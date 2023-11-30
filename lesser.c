/* ;esser.c --找出两个整数中较小的一个 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int imin(int, int);

int main(void)
{
	int evil1, evil2;

	printf("Enter a pair of integers(q to quit):\n");
	while (scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("the lesser of %d and %d is %d.\n",
			evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers(1 to quit):\n");
	}

	printf("Bye.\n");

	return 0;
}

int imin(int n, int m)
{
	return n < m ? n : m;
}
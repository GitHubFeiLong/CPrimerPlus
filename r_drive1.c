/* r_driver1.c ����rand1()��srand1()*/
/* ��rand0.c һ�����*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void srand1(unsigned int x);
extern int rand0(void);

int main(void)
{
	int count;
	unsigned seed;

	printf("Please enter your choice for seed.\n");
	while (scanf("%u", &seed) == 1)
	{
		srand1(seed);
		for (count = 0; count < 5; count++)
			printf("%d\n", rand0());
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done\n");

	return 0;
}

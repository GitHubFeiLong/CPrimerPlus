/* print2.c -- ����printf()������*/
#include <stdio.h>

int main(void)
{
	unsigned int un = 3000000000; // intΪ32��shortΪ16λ��ϵͳ
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un); // un = 3000000000 and not -1294967296
	printf("end = %hd and %d\n", end , end); // end = 200 and 200
	printf("big = %ld and not %hd\n", big , big); // big = 65537 and not 1
	printf("verybig = %lld and not %ld\n", verybig, verybig); // verybig = 12345678908642 and not 1942899938

	return 0;
}
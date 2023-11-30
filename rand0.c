/* rand0.c 生成随机数*/
#include <stdio.h>
static unsigned long int next = 1; // 种子

unsigned int rand0(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
	next = seed;
}
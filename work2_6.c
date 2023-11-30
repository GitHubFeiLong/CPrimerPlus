#include <stdio.h>
int main(void)
{
	int toes;
	int doubleToes; // 2倍toes
	int squareToes; // 平方toes
	toes = 10;
	doubleToes = toes + toes;
	squareToes = toes * toes;

	printf("toes = %d, double toes = %d, square toes = %d", toes, doubleToes, squareToes);

	return 0;
}
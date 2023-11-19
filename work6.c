#include <stdio.h>
int main(void)
{
	int toes;
	int doubleToes; // 2±¶toes
	int squareToes; // Æ½·½toes
	toes = 10;
	doubleToes = toes + toes;
	squareToes = toes * toes;

	printf("toes = %d, double toes = %d, square toes = %d", toes, doubleToes, squareToes);

	return 0;
}
/* fgets2.c -- ʹ��fgets()��fputs()*/
#include <stdio.h>
#define STLEN 10

int main(void)
{
	char words[STLEN];

	puts("Enter strings(empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
		fputs(words, stdout);
	printf("Done.");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "s_gets.h"
#define MAXTITL 41	// ����
#define MAXAUTL 31	// ����

struct book {
	char title[MAXTITL];
	char autor[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library;	// ����book���͵ı���

	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);
	printf("Now enter the author.\n");
	s_gets(library.autor, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s:$%.2f\n", library.title, library.autor, library.value);
	printf("%s: \"%s\"($%.2f)\n", library.autor, library.title, library.value);
	printf("Done.\n");

	return 0;
}

/* nogo.c -- �ó����Ƿ����������� */
#include <stdio.h>
#include "s_gets.h"
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40

int main(void)
{
	char try[SIZE];

	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
	// while (try != ANSWER) // ������һֱfalse�� ��Ϊ����ָ����Զ����ȡ�
	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right!");

	return 0;
}
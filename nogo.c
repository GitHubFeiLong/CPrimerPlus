/* nogo.c -- 该程序是否能正常运行 */
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
	// while (try != ANSWER) // 这样会一直false， 因为两个指针永远不相等。
	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right!");

	return 0;
}
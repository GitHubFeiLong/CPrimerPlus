#include<stdio.h>

int main(void)
{
	char c;
	long totalChars = 0;

	while ((c = getchar()) != EOF)
	{
		totalChars++;
	}
	printf("读取完毕：共%ld个字符", totalChars);

	return 0;
}
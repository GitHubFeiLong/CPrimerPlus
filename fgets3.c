/* fgets3.c -- 使用 fgets()*/
#include <stdio.h>
#define STLEN 10

int main(void)
{
	char words[STLEN];
	int i;

	puts("Enter strings (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;
		if (words[i] == '\n') // 将换行换成字符串结尾
			words[i] = '\0';
		else // 将后续字符全部舍弃。
			while (getchar() != '\n')
				continue;
		puts(words);
	}

	puts("done.");

	return 0;
}
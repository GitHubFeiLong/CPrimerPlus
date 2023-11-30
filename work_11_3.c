#include <stdio.h>
#include <ctype.h>
#define WORDS 3
#define LEN 10

void input(char p[][LEN]);

int main(void)
{
	char words[WORDS][LEN];
	int i;

	input(words);
	for (i = 0; i < WORDS; i++)
		puts(words[i]);

	return 0;
}

void input(char p[][LEN])
{
	int i, j;
	char c;
	_Bool flag = 0;

	printf("请输入单词：\n");
	for (i = 0; i < WORDS; i++)
	{
		j = 0;
		
		while ((c = getchar()) != '\n')
		{
			// 空白字符或该行已有单词
			if (isspace(c) && flag)
				break;
			// 不是空白字符，就需要记录单词。
			if (!isspace(c))
			{
				*(*(p + i) + j++) = c;
				flag = 1;
			}
		}
		// 加上空字符到字符串末尾
		*(*(p + i) + j) = '\0';
		// 恢复标识
		flag = 0;
		// 当c不是回车说明该行还有字符需要将其丢弃！！
		if (c != '\n')
			while (getchar() != '\n')
				continue;
	}

	
}
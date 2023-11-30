#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ic;
	int spaceNum = 0, lineNum = 0, otherNum = 0;

	printf("请输入字符（输入#退出）程序:\n");
	while ((ic = getchar()) != '#')
	{
		if (isspace(ic))
			spaceNum++;
		else if (ic == '\n')
			lineNum++;
		else
			otherNum++;
	}

	printf("空格数：%d,换行数：%d,其它字符数：%d", spaceNum, lineNum, otherNum);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ic;
	int spaceNum = 0, lineNum = 0, otherNum = 0;

	printf("�������ַ�������#�˳�������:\n");
	while ((ic = getchar()) != '#')
	{
		if (isspace(ic))
			spaceNum++;
		else if (ic == '\n')
			lineNum++;
		else
			otherNum++;
	}

	printf("�ո�����%d,��������%d,�����ַ�����%d", spaceNum, lineNum, otherNum);

	return 0;
}
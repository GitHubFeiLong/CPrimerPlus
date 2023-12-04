#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 255

int main(int argc, char* argv[])
{
	FILE* fp;
	char str[STRLEN];

	if (argc != 3)
	{
		fprintf(stderr, "参数丢失");
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "打开文件%s失败", argv[2]);
		exit(EXIT_FAILURE);
	}

	while (fgets(str, STRLEN, fp) != NULL)
	{
		if (strstr(str, argv[1]) != NULL)
		{
			fputs(str, stdout);
		}
	}
	if (fclose(fp) != 0)
	{
		fprintf(stderr, "关闭文件%s失败", argv[2]);
	}
	return 0;
}
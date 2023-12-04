#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LEN 1000

int main(void)
{
	char filename[LEN];
	int seek;
	FILE* fp;
	char c;

	printf("请输入文件所在位置：\n");
	while (scanf("%s", filename) != 1)
	{
		printf("请输入文件所在位置：\n");
	}

	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "打开文件%s失败\n", filename);
		exit(EXIT_FAILURE);
	}
	printf("请输入seek:");
	while (scanf("%d", &seek) == 1)
	{
		if (seek < 0)
			exit(EXIT_FAILURE);
		fseek(fp, seek, _IOFBF);
		while ((c = fgetc(fp)) != EOF)
		{
			fputc(c, stdout);
			if (c == '\n')
				break;
		}
		printf("请输入seek:");
	}

	if (fclose(fp) != 0)
	{
		fprintf(stderr, "关闭文件失败\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}
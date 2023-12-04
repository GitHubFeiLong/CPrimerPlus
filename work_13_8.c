#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_NAME_LEN 100

void findCharByCommand(int argc, char* argv[]);
void findCharByStdio(char findChar);

int main(int argc, char* argv[])
{
	char c;
	int i;

	if (argc < 2)
	{
		fprintf(stderr, "参数缺失");
		exit(EXIT_FAILURE);
	}

	c = argv[1][0]; // 获取字符
	// 从命令行获取文件
	if (argc > 2)
		findCharByCommand(argc, argv);
	else // 从标准输入获取
		findCharByStdio(argv[1][0]);

	return 0;
}

void findCharByCommand(int argc, char* argv[])
{
	int i;
	unsigned int count = 0;
	char findChar = argv[1];
	char c;
	FILE* fp;

	for (i = 2; i < argc; i++)
	{
		if ((fp = fopen(argv[i], "r")) == NULL)
		{
			fprintf(stderr, "文件%s无法打开\n", argv[i]);
			continue;
		}

		while ((c = fgetc(fp)) != EOF)
		{
			if (c == findChar)
				count++;
		}
		if (fclose(fp) != 0)
		{
			fprintf(stderr, "关闭文件%s失败\n", argv[i]);
		}
		fprintf(stdout, "%s 包含 %ud个 %c\n", argv[i], count, findChar);
	}
}

void findCharByStdio(char findChar)
{
	char filename[FILE_NAME_LEN];
	char exitStr[] = "#";
	FILE* fp;
	int count = 0;
	char c;

	printf("请输入需要读取的文件名(输入%s退出程序)\n", exitStr);
	while (scanf("%s", filename) == 1)
	{
		if (strncmp(filename, exitStr, 1) == 0)
		{
			fprintf(stdout, "Done.\n");
			exit(EXIT_FAILURE);
		}
		if ((fp = fopen(filename, "r")) == NULL)
		{
			fprintf(stderr, "打开文件%s失败\n", filename);
			continue;
		}
		while ((c = fgetc(fp)) != EOF)
		{
			if (c == findChar)
				count++;
		}
		if (fclose(fp) != 0)
		{
			fprintf(stderr, "关闭文件%s失败\n", filename);
			exit(EXIT_FAILURE);
		}
		fprintf(stdout, "%s 包含 %u个 %c\n", filename, count, findChar);
		count = 0;
	}
}
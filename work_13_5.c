
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
#define BUFSIZE 4096

void append(FILE* fp_src, FILE* fp_dest);

int main(int argc, char * argv[])
{
	FILE* fp_src;
	FILE* fp_dest;
	int files = 0;
	int ch;
	int i;

	if (argc < 3)
	{
		fputs("缺少命令行参数\n", stderr);
		exit(EXIT_FAILURE);
	}

	if ((fp_dest = fopen(argv[1], "a+")) == NULL)
	{
		printf("打开%s失败\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fp_dest, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("创建输出缓冲失败\n", stderr);
		exit(EXIT_FAILURE);
	}
	for (i = 2; i < argc; i++)
	{
		if (strcmp(argv[1], argv[i]) == 0)
		{
			fprintf("参数错误，不能输入和输出文件不能相同\n", stderr);
			exit(EXIT_FAILURE);
		}
		if ((fp_src = fopen(argv[i], "r")) == NULL)
		{
			printf("打开%s失败\n", argv[i]);
			continue;
		}
		if (setvbuf(fp_src, NULL, _IOFBF, BUFSIZE) != 0)
		{
			fprintf(stderr, "创建输出缓冲区失败\n");
			continue;
		}
		append(fp_src, fp_dest);
		if (ferror(fp_src) != 0)
			fprintf(stderr, "读取文件%s失败\n", argv[i]);
		if (ferror(fp_dest) != 0)
			fprintf(stderr, "写入文件%s失败\n", argv[i]);

		if (fclose(fp_src) != 0)
			fprintf(stderr, "关闭文件%s失败\n", argv[i]);

		files++;
		printf("File %s appended.\n", argv[i]);
	}

	printf("Done appending. %d files appended\n", files);
	rewind(fp_dest);
	while ((ch = fgetc(fp_dest)) != EOF)
		fputc(ch, stdout);

	puts("\nDone displaying.");
	fclose(fp_dest);

	return 0;
}

void append(FILE* fp_src, FILE* fp_dest)
{
	static char temp[BUFSIZE];
	size_t bytes;

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, fp_src)) > 0)
		fwrite(temp, sizeof(char), bytes, fp_dest);
}
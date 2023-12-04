#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#define LINE_LEN 4096

int main(int argc, char* argv[])
{
	FILE* fp_1, *fp_2;
	char ch1[LINE_LEN], ch2[LINE_LEN];
	bool read1_eof = false;
	bool read2_eof = false;

	if (argc < 3)
	{
		fprintf(stderr, "参数缺失\n");
		exit(EXIT_FAILURE);
	}
	if ((fp_1 = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "打开文件%s失败\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fp_2 = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "打开文件%s失败\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while (!read1_eof || !read2_eof)
	{
		if (!read1_eof)
		{
			fgets(ch1, LINE_LEN, fp_1);

			// b小题，将换行去掉
			char* n = strchr(ch1, '\n');
			// 修改换行符为'\0'
			if (n != NULL)
				*n = '\0';

			fputs(ch1, stdout);
			if (feof(fp_1))
				read1_eof = true;
		}
		if (!read2_eof)
		{
			fgets(ch2, LINE_LEN, fp_2);
			fputs(ch2, stdout);
			if (feof(fp_2))
				read2_eof = true;
		}
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp_src;
	FILE* fp_dest;
	char ch; 

	if (argc < 3)
	{
		printf("%s 参数丢失", argv[0]);
		exit(EXIT_FAILURE);
	}

	// 尝试打开源文件
	if ((fp_src = fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr, "打开源文件%s失败\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	// 尝试打开目标文件
	if ((fp_dest = fopen(argv[2], "wb")) == NULL)
	{
		fprintf(stderr, "打目标文件%s失败\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	
	while ((ch = fgetc(fp_src)) != EOF)
	{
		// 写到文件去
		fputc(ch, fp_dest);
	}

	if (fclose(fp_src) != 0 && fclose(fp_dest) != 0)
	{
		fprintf(stderr, "关闭文件失败\n");
		exit(EXIT_FAILURE);
	}
	printf("\n写文件完成\n");
	return 0;
}
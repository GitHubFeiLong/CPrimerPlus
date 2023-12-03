#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 200

int main(void)
{
	char filename[SIZE];
	FILE* fp;
	char c;

	printf("请输入文件名：");
	while (scanf("%199s", filename) != 1)
		printf("请输入文件名：");
	filename[SIZE - 1] = '\0';
	if ((fp = fopen(filename, "r+")) == NULL)
	{
		printf("打开文件失败:%s\n", filename);
		exit(EXIT_FAILURE);
	}
	// 先获取字符
	while ((c = fgetc(fp)) != EOF)
	{
		if (islower(c))
		{
			// 写之前修改写的位置！
			fseek(fp, - 1, SEEK_CUR);
			fputc(toupper(c), fp);
			fseek(fp, 0, SEEK_CUR);
		}
	}

	if (fclose(fp) != 0)
	{
		fprintf(stderr, "关闭文件失败：%s", filename);
		exit(EXIT_FAILURE);
	}

	return 0;
}
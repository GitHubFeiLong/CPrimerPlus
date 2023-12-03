/* work_13_1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SLEN 20

int main(void)
{
	char ch;
	int count = 0;
	char filename[SLEN];
	FILE* fp;
	
	printf("请输入文件名：");
	while (scanf("%20s", filename) != 1)
	{
		printf("请输入正确的文件名:");
	}
	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "打开文件%s失败\n", filename);
		exit(EXIT_FAILURE);
	}
	// 读取文件
	while ((ch = fgetc(fp)) != EOF)
	{
		fputc(ch, stdout);
		count++;
	}
	
	fclose(fp);
	printf("\n读取文件完毕,共%d字符\n", count);

	return 0;
}

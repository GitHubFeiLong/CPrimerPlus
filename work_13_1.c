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
	
	printf("�������ļ�����");
	while (scanf("%20s", filename) != 1)
	{
		printf("��������ȷ���ļ���:");
	}
	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "���ļ�%sʧ��\n", filename);
		exit(EXIT_FAILURE);
	}
	// ��ȡ�ļ�
	while ((ch = fgetc(fp)) != EOF)
	{
		fputc(ch, stdout);
		count++;
	}
	
	fclose(fp);
	printf("\n��ȡ�ļ����,��%d�ַ�\n", count);

	return 0;
}

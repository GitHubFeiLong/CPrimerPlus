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

	printf("�������ļ�����");
	while (scanf("%199s", filename) != 1)
		printf("�������ļ�����");
	filename[SIZE - 1] = '\0';
	if ((fp = fopen(filename, "r+")) == NULL)
	{
		printf("���ļ�ʧ��:%s\n", filename);
		exit(EXIT_FAILURE);
	}
	// �Ȼ�ȡ�ַ�
	while ((c = fgetc(fp)) != EOF)
	{
		if (islower(c))
		{
			// д֮ǰ�޸�д��λ�ã�
			fseek(fp, - 1, SEEK_CUR);
			fputc(toupper(c), fp);
			fseek(fp, 0, SEEK_CUR);
		}
	}

	if (fclose(fp) != 0)
	{
		fprintf(stderr, "�ر��ļ�ʧ�ܣ�%s", filename);
		exit(EXIT_FAILURE);
	}

	return 0;
}
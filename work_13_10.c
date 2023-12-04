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

	printf("�������ļ�����λ�ã�\n");
	while (scanf("%s", filename) != 1)
	{
		printf("�������ļ�����λ�ã�\n");
	}

	if ((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "���ļ�%sʧ��\n", filename);
		exit(EXIT_FAILURE);
	}
	printf("������seek:");
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
		printf("������seek:");
	}

	if (fclose(fp) != 0)
	{
		fprintf(stderr, "�ر��ļ�ʧ��\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}
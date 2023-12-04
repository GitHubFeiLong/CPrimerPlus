#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRLEN 255

int main(int argc, char* argv[])
{
	FILE* fp;
	char str[STRLEN];

	if (argc != 3)
	{
		fprintf(stderr, "������ʧ");
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "���ļ�%sʧ��", argv[2]);
		exit(EXIT_FAILURE);
	}

	while (fgets(str, STRLEN, fp) != NULL)
	{
		if (strstr(str, argv[1]) != NULL)
		{
			fputs(str, stdout);
		}
	}
	if (fclose(fp) != 0)
	{
		fprintf(stderr, "�ر��ļ�%sʧ��", argv[2]);
	}
	return 0;
}
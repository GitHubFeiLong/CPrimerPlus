#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp;
	char c;
	int fileIndex;

	if (argc < 2)
	{
		fprintf(stderr,"����������в���\n");
		exit(EXIT_FAILURE);
	}

	for (fileIndex = 1; fileIndex < argc; fileIndex++)
	{
		if ((fp = fopen(argv[fileIndex], "r")) == NULL)
		{
			printf("���ļ���%sʧ��\n", argv[fileIndex]);
			continue;
		}
		printf("\n%s:\n", argv[fileIndex]);
		while ((c = fgetc(fp)) != EOF)
		{
			fputc(c, stdout);
		}
		if (fclose(fp) != 0)
		{
			printf("\n%s�ر�ʧ��", argv[fileIndex]);
			exit(EXIT_FAILURE);
		}
	}

	return 0;
}
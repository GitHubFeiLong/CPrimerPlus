#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_NAME_LEN 100

void findCharByCommand(int argc, char* argv[]);
void findCharByStdio(char findChar);

int main(int argc, char* argv[])
{
	char c;
	int i;

	if (argc < 2)
	{
		fprintf(stderr, "����ȱʧ");
		exit(EXIT_FAILURE);
	}

	c = argv[1][0]; // ��ȡ�ַ�
	// �������л�ȡ�ļ�
	if (argc > 2)
		findCharByCommand(argc, argv);
	else // �ӱ�׼�����ȡ
		findCharByStdio(argv[1][0]);

	return 0;
}

void findCharByCommand(int argc, char* argv[])
{
	int i;
	unsigned int count = 0;
	char findChar = argv[1];
	char c;
	FILE* fp;

	for (i = 2; i < argc; i++)
	{
		if ((fp = fopen(argv[i], "r")) == NULL)
		{
			fprintf(stderr, "�ļ�%s�޷���\n", argv[i]);
			continue;
		}

		while ((c = fgetc(fp)) != EOF)
		{
			if (c == findChar)
				count++;
		}
		if (fclose(fp) != 0)
		{
			fprintf(stderr, "�ر��ļ�%sʧ��\n", argv[i]);
		}
		fprintf(stdout, "%s ���� %ud�� %c\n", argv[i], count, findChar);
	}
}

void findCharByStdio(char findChar)
{
	char filename[FILE_NAME_LEN];
	char exitStr[] = "#";
	FILE* fp;
	int count = 0;
	char c;

	printf("��������Ҫ��ȡ���ļ���(����%s�˳�����)\n", exitStr);
	while (scanf("%s", filename) == 1)
	{
		if (strncmp(filename, exitStr, 1) == 0)
		{
			fprintf(stdout, "Done.\n");
			exit(EXIT_FAILURE);
		}
		if ((fp = fopen(filename, "r")) == NULL)
		{
			fprintf(stderr, "���ļ�%sʧ��\n", filename);
			continue;
		}
		while ((c = fgetc(fp)) != EOF)
		{
			if (c == findChar)
				count++;
		}
		if (fclose(fp) != 0)
		{
			fprintf(stderr, "�ر��ļ�%sʧ��\n", filename);
			exit(EXIT_FAILURE);
		}
		fprintf(stdout, "%s ���� %u�� %c\n", filename, count, findChar);
		count = 0;
	}
}
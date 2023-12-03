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
		printf("%s ������ʧ", argv[0]);
		exit(EXIT_FAILURE);
	}

	// ���Դ�Դ�ļ�
	if ((fp_src = fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr, "��Դ�ļ�%sʧ��\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	// ���Դ�Ŀ���ļ�
	if ((fp_dest = fopen(argv[2], "wb")) == NULL)
	{
		fprintf(stderr, "��Ŀ���ļ�%sʧ��\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	
	while ((ch = fgetc(fp_src)) != EOF)
	{
		// д���ļ�ȥ
		fputc(ch, fp_dest);
	}

	if (fclose(fp_src) != 0 && fclose(fp_dest) != 0)
	{
		fprintf(stderr, "�ر��ļ�ʧ��\n");
		exit(EXIT_FAILURE);
	}
	printf("\nд�ļ����\n");
	return 0;
}
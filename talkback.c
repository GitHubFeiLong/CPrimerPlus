// talkback.c -- ��ʾ���û�����
#define _CRT_SECURE_NO_WARNINGS // ����scanf����
#include <stdio.h>
#include <string.h> // �ṩstrlen()������ԭ��
#define DENSITY 62.4 // �����ܶȣ���λ����/����Ӣ�ߣ�
int main()
{
	float weight, volume;
	int size, letters;
	char name[40]; // name��һ��������40���ַ���ʵ��39����ʣ��1���洢ASCII��ֵ0Ҳ����'\0'��������

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof(name); // �ֽ���
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	scanf("%c", &ch); 
	while (ch != 'g')
	{
		printf("%c", ++ch); // ��ӡ�ַ�����һ���ַ���
		scanf("%c", &ch); // ���Ŷ��ַ�����ch������
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	// ���� ��Go west, young man!��
	// ��� ��Go west, youn��
	scanf("%c", &ch); // ��ȡ��һ���ַ�
	while (ch != 'g')
	{
		printf("%c", ch);
		scanf("%c", &ch); // ����Ŷ�ȡ�����ַ���ch�����У�ֱ���հ׷������У�
	}

	return 0;
}
#include<stdio.h>

int main(void)
{
	char c;
	long totalChars = 0;

	while ((c = getchar()) != EOF)
	{
		totalChars++;
	}
	printf("��ȡ��ϣ���%ld���ַ�", totalChars);

	return 0;
}
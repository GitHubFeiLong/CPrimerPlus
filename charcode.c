/* charcode.c - ��ʾ�ַ��Ĵ����� */
#include <stdio.h>

int main(void)
{
	char ch;
	printf("Please enter a character.\n");
	scanf_s("%c", &ch);
	printf("The code for %c is %d.\n", ch, ch);

	return 0;
}
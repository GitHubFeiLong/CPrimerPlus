/* echo_eof.c -- �ظ����룬ֱ���ļ���β */
#include <stdio.h>

int main(void)
{
	int ch;

	// UNIX/Linux ʹ��Ctrl+D�����ļ���β�ź�
	// Windows ��ȷʹ���� Enter,Ctrl+Z,Enter
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
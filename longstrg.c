/* longstrg.c --��ӡ�ϳ����ַ���  */
#include <stdio.h>
int main(void)
{
	int len = printf("Here's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n"); // '\'�ַ����в�Ҫʹ���������Ὣ�������ɴ�ӡ�ַ���ӡ��
	printf("Here's the newest way to print a "
		"long string.\n"); // ANSI C ����˫�������������ַ���֮���ÿհ׸�����C��������Ѷ���ַ���������һ���ַ�����

	return 0;
}
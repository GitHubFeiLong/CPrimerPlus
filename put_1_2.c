/* put1.c -- ��ӡ�ַ����������\n */
#include <stdio.h>

void put1(const char* string); // ����ı��ַ���

int main(void)
{

	return 0;
}

void put1(const char* string)
{
	while (*string != '\0')
		putchar(*string++); // һԪ������ҵ�����ִ��string++,*string����ִ��++ǰ��ֵ��
}

void put2(const char* string)
{
	while (*string) /* ��stringָ����ַ�'\0'ʱ `*string`��ֵ��0 */
		putchar(*string++); // һԪ������ҵ�����ִ��string++
}
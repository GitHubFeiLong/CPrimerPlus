/* work2.c -- ����һ��ASCII����ӡ������ַ� */
#include <stdio.h>

int main(void)
{
	int num;
	printf("������һ����Ч��ASCIIֵ��");
	scanf_s("%d", &num);
	printf("��������ַ��ǣ�%c", (char)num);

	return 0;
}
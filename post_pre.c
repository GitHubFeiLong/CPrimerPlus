/* post_pre.c -- ǰ׺�ͺ�׺ */
#include <stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++; // ��׺����,��ʹ��a��ֵ���Ƹ�a_post��Ȼ��a������
	pre_b = ++b; // ǰ׺�������ȵ���b��ֵ���ٸ�pre_b��ֵ��
	printf("a a_post b pre_b \n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

	return 0;
}
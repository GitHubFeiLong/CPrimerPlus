/* showf_pt.c -- �����ַ�ʽ��ʾfloat���͵�ֵ */
#include <stdio.h>

int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	// ��һ��Ҫ�������֧��C99�����е��������
	printf("Ant it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%LF can be writeen %Le\n", dip, dip);

	float toobig = 3.4E38 * 100.0F;
	printf("%e \n", toobig);

	return 0;
}
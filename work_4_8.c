#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define D1 3.785
#define D2 1.609
#define D3 100

int main(void)
{
	float lc, consume; // ��̺����ĵ�������
	float f3;
	float f4;
	printf("���������е���̺��������á�,���ָ�:\n");
	scanf("%f,%f", &lc, &consume);
	f3 = consume / lc;
	printf("����ÿ����������ʻ��Ӣ������%.1f.\n", f3);
	f4 = (D2 * lc) / (D1 * consume) / D3;
	prinf("ת������/100���%.1f.\n", f4);


	return 0;
}
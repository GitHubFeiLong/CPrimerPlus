/* work4.c -- ָ��������� */
#include <stdio.h>
void jolly(void); // ANSI/ISO C����ԭ�ͣ�Ҳ�к���������
void deny(void); // ANSI/ISO C����ԭ�ͣ�Ҳ�к���������

int main(void)
{
	jolly(); // ��������
	deny(); // ��������

	return 0;
}

// ��������
void jolly(void)
{
	printf("Fir he's a jolly good fellow!\n");
	printf("Fir he's a jolly good fellow!\n");
	printf("Fir he's a jolly good fellow!\n");
}

// ��������
void deny(void)
{
	printf("Which nobody can deny!\n");
}
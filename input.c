/* input.c -- ��ʱʹ�� &*/
/* ʹ��scanf(),��ȡ�����������͵�ֵ���������� & */
/* ʹ��scanf(),���ַ��������ַ�����ֵ������ & */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;
	float assets;
	char pet[30];
	printf("Enter your age, assets, and favorite pet.\n");
	scanf("%d %f", &age, &assets); // scanfʹ�ÿհף����з� �Ʊ���Ϳո񣩰�����ֳɶ�Ρ�
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
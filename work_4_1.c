#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char familyName[10];
	char name[10];
	printf("����������գ�\n");
	scanf("%s", familyName);
	printf("�����������\n");
	scanf("%s", name);
	printf("��������ǣ�%s,%s", name, familyName);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LIMIT 10

int main(void)
{
	int input;
	int max;

	printf("������һ��������������ӡ�ȸ�����10������������\n");
	scanf("%d", &input);
	max = input + LIMIT;
	while (input++ < max)
		printf("%d ", input);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 60

int main(void)
{
	int totalMin;
	printf("�������ʱ��(����ֵС�ڻ����0ʱ�˳�����)��\n");
	scanf("%d", &totalMin);
	while (totalMin > 0)
	{
		int hour = totalMin / SIZE; // ʱ
		int min = totalMin % SIZE; // ��
		printf("hout:%d,min=%d\n", hour, min);
		printf("�������ʱ��(����ֵС�ڻ����0ʱ�˳�����)��\n");
		scanf("%d", &totalMin);
	}
	printf("Done!\n");

	return 0;
}

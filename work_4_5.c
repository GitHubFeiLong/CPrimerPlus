#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float speed, filesize;
	printf("���������ٶȣ���λMb/s��:\n");
	scanf("%f", &speed);
	printf("�����ļ���С����λMB��\n");
	scanf("%f", &filesize);
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds", speed, filesize, filesize * 8 / speed);


	return 0;
}
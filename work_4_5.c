#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float speed, filesize;
	printf("输入下载速度（单位Mb/s）:\n");
	scanf("%f", &speed);
	printf("输入文件大小（单位MB）\n");
	scanf("%f", &filesize);
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds", speed, filesize, filesize * 8 / speed);


	return 0;
}
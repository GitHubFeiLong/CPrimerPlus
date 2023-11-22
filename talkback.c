// talkback.c -- 演示与用户交互
#define _CRT_SECURE_NO_WARNINGS // 禁用scanf报错
#include <stdio.h>
#include <string.h> // 提供strlen()函数的原型
#define DENSITY 62.4 // 人体密度（单位：磅/立方英尺）
int main()
{
	float weight, volume;
	int size, letters;
	char name[40]; // name是一个可容纳40个字符（实际39个，剩余1个存储ASCII码值0也就是'\0'）的数组

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof(name); // 字节数
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}
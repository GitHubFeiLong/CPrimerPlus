#include <stdio.h>

int main(void)
{
	int age;
	float seconds = 3.156e7; // 3.156 * 10000000

	printf("����������䣺");
	scanf_s("%d", &age);
	printf("\n�����%d�꣬�����%.f��", age, seconds * age);
	return 0;
}
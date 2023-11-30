#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	// stdbool.h 将bool作为_Bool的别名
	// true和false分别定义为1和0的符号常量
	bool flag = true; 
	
	printf("What is the value of pi?\n");
	scanf("%lf", &response);
	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("Typ again!\n");
		scanf("%lf", &response);
	}
	printf("Close enough!\n");

	return 0;
}
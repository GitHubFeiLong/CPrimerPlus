#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	// stdbool.h ��bool��Ϊ_Bool�ı���
	// true��false�ֱ���Ϊ1��0�ķ��ų���
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
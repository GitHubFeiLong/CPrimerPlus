#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

char get_first(void);
int check_symbol(char ch);
float cal(char symbol);

int main(void)
{
	char ic;
	float num1, num2;
	float result;

	do
	{
		printf("�������������+��-��*��/ (���»س�ȷ������, ����#�˳�)��\n");
		ic = get_first();
		
		if (ic == '#')
			break;
		printf("�������������Զ��ŷָ������磺5.4,6.32:\n");
		scanf("%f,%f", &num1, &num2);
		if (ic == '+')
		{
			result = num1 + num2;
		}
		else if (ic == '-')
		{
			result = num1 - num2;
		}
		else if (ic == '*')
		{
			result = num1 * num2;
		}
		else if (ic == '/')
		{
			while (num2 == 0.0F)
			{
				printf("��������ȷ�ĳ�����");
				scanf("%f", &num2);
			}

			result = num1 / num2;
		}
		else
		{
			break;
		}
		printf("%f %c %f = %f\n", num1, ic, num2, result);
	} while (ic != '#');

	printf("Bye!\n");

	return 0;
}

char get_first(void)
{
	char ch;
	while (isspace((ch = getchar())) || !check_symbol)
		continue;
	return ch;
}

int check_symbol(char ch)
{
	return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '#';
}

float cal(char symbol)
{
	
}
#include <stdio.h>
#include <ctype.h>

void get(char* c, int num);

int main(void)
{
	char c[5];
	int i;

	get(c, 5);
	puts(c);

	return 0;
}

void get(char* c, int num)
{
	int i;
	int size = sizeof(c) / sizeof(c[0]); // ���鳤��

	for (i = 0; i < size; i++)
	{
		if (i < num && isspace(*c++ = getchar()))
			break;
	}
	// ��������ַ�ȡ��
	while (*c != '\n' && getchar() != '\n')
		continue;
}
#include <stdio.h>

int main(void)
{
	int i = 0;

	// ��ӡ�����Ρ�Hi������i=4
	while (++i < 4)
		printf("Hi! ");
	
	// ��ӡ5�Ρ�Bye! ����i=8
	do
		printf("Bye! ");
	while (i++ < 8);

	return 0;
}
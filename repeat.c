/* repeat.c -- ��������main()*/
#include <stdio.h>

/*
	argc���������е��ַ��������������������ʵ�ʲ��� = argc - 1
	argv�洢�������������ַ����ĵ�ַ��
*/
int main(int argc, char * argv[])
{
	int count;

	printf("The command line has %d arguments:\n", argc - 1);
	for (count = 1; count < argc; count++)
		printf("%d:%s\n", count, argv[count]);
	printf("\n");

	return 0;
}

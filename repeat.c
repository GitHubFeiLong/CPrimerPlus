/* repeat.c -- 带参数的main()*/
#include <stdio.h>

/*
	argc是命令行中的字符串数量，包含命令，所以实际参数 = argc - 1
	argv存储命令行中所有字符串的地址。
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

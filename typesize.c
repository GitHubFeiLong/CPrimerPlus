/* typesize.c -- 打印类型大小 */
#include <stdio.h>

int main(void)
{
	/* C99 为类型大小提供%zd 转换说明 */

	printf("Type int has a size of %zd bytes.\n", sizeof(int)); // Type int has a size of 4 bytes.
	printf("Type char has a size of %zd bytes.\n", sizeof(char)); // Type char has a size of 1 bytes.
	printf("Type long has a size of %zd bytes.\n", sizeof(long)); // Type long has a size of 4 bytes.
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long)); // Type long long has a size of 8 bytes.
	printf("Type double has a size of %zd bytes.\n", sizeof(double)); // Type double has a size of 8 bytes.

	return 0;
}
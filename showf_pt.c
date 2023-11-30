/* showf_pt.c -- 以两种方式显示float类型的值 */
#include <stdio.h>

int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	// 下一行要求编译器支持C99或其中的相关特性
	printf("Ant it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%LF can be writeen %Le\n", dip, dip);

	float toobig = 3.4E38 * 100.0F;
	printf("%e \n", toobig);

	return 0;
}
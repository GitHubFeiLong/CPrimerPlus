#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define D1 3.785
#define D2 1.609
#define D3 100

int main(void)
{
	float lc, consume; // 里程和消耗的汽油量
	float f3;
	float f4;
	printf("请输入旅行的里程和汽油量用“,”分隔:\n");
	scanf("%f,%f", &lc, &consume);
	f3 = consume / lc;
	printf("消耗每加仑汽油行驶的英里数：%.1f.\n", f3);
	f4 = (D2 * lc) / (D1 * consume) / D3;
	printf("转换成升/100公里：%.1f.\n", f4);


	return 0;
}
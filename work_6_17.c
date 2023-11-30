#include <stdio.h>
#define WIN_AMOUNT 1e6
#define OUT 1e5

int main(void)
{
	int i = 0;
	float f1, account = WIN_AMOUNT;
	
	do
	{
		i++;
		f1 = account * 0.08;
		account += f1 - OUT; // 加上利息, 减去取款
		printf("第%d年，银行剩余余额：%f, 当年赚取利息 %f，取出%f\n", i, account, f1, OUT);
	} while (account >= OUT);

	printf("%d 年后，取完", account > 0 ? i+1 : i);
	return 0;
}
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
		account += f1 - OUT; // ������Ϣ, ��ȥȡ��
		printf("��%d�꣬����ʣ����%f, ����׬ȡ��Ϣ %f��ȡ��%f\n", i, account, f1, OUT);
	} while (account >= OUT);

	printf("%d ���ȡ��", account > 0 ? i+1 : i);
	return 0;
}
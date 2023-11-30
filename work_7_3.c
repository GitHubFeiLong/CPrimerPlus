#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int in, evenNum, oddNum, evenSum, oddSum;
	
	evenNum = 0;
	oddNum = 0;
	evenSum = 0;
	oddSum = 0;
	printf("请输入数字（输入0退出程序）\n");
	
	while (scanf("%d", &in) == 1 && in != 0)
	{
		if (in % 2 == 0)
		{
			evenNum++;
			evenSum += in;
		}
		else
		{
			oddNum++;
			oddSum += in;
		}
	}

	printf("输入的偶数个数：%d, 所有偶数的平均值：%.2f\n", evenNum, (float)evenSum / evenNum);
	printf("输入的奇数个数：%d, 所有奇数的平均值：%.2f\n", oddNum, (float)oddSum / oddNum);


	return 0;
}
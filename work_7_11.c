#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define FOOD1 2.05
#define FOOD2 1.15
#define FOOD3 1.09
#define FREIGHT1 6.5
#define FREIGHT2 14
#define FREIGHT3 0.5
#define DISCOUNT 0.05

void printMenu(void);

int main(void)
{
	char type;	// 1
	int flag = 0;	// 2
	float f1 = 0.0F;	// 2
	float f2 = 0.0F;	// 2
	float f3 = 0.0F;	// 2
	float f1Total = 0.0F;	// 2
	float f2Total = 0.0F;	// 2
	float f3Total = 0.0F;	// 2
	float allTotal = 0.0F;	// 2
	float allAmount = 0.0F;		// 2
	float rawAllAmount = 0.0F; // 2
	float zk; // 2
	float allFright = 0.0F; // 2
	float temp = 0.0F; // 2

	printMenu();
	while (scanf("%c", &type) && type != 'q')
	{
		if (!flag)
			flag = 1;
		switch (type)
		{
		case 'a':
			printf("请输入洋鲫($%.2f/磅)的磅数:", FOOD1);
			scanf("%f", &f1);
			f1Total += f1;
			break;
		case 'b':
			printf("请输入甜菜($%.2f/磅)的磅数:", FOOD2);
			scanf("%f", &f2);
			f2Total += f2;
			break;
		case 'c':
			printf("请输入胡萝卜($%.2f/磅)的磅数:", FOOD3);
			scanf("%f", &f3);
			f3Total += f3;
			break;
		default: // 使用scanf输入磅数时的回车字符，也会进入循环
			continue; // 1
		}
		printMenu();
	}
	if (flag)
	{
		printf("您选购的商品如下：\n");
		if (f1Total > 0)
		{
			allAmount += f1Total * FOOD1;
			printf("洋鲫($%.2f/磅)%.2f磅\n", FOOD1, f1Total);
		}
		if (f2Total > 0)
		{
			allAmount += f2Total * FOOD2;
			printf("甜菜($%.2f/磅)%.2f磅\n", FOOD2, f2Total);
		}
		if (f3Total > 0)
		{
			allAmount += f3Total * FOOD3;
			printf("胡萝卜($%.2f/磅)%.2f磅\n", FOOD3, f3Total);
		}

		// 总磅数
		allTotal = f1Total + f2Total + f3Total;
		rawAllAmount = allAmount;
		// 超过100美元打5%的折扣
		if (rawAllAmount >= 100)
		{
			// 计算折扣
			zk = rawAllAmount - (1 - DISCOUNT) * allAmount;
			allAmount -= zk;
		}

		if (allTotal <= 5)
		{
			allAmount += FREIGHT1;
			allFright += FREIGHT1;
		}
		else if (allTotal <= 20)
		{
			allAmount += FREIGHT2;
			allFright += FREIGHT2;
		}
		else
		{
			temp = (allTotal - 20) * FREIGHT3;
			allFright += temp;
			allAmount += FREIGHT2 + temp;
		}

		printf("货物总价：%f; 折扣：%f，运费和包装费：%f，total:%f", rawAllAmount, zk, allFright, allAmount);
	}


	return 0;
}

void printMenu(void)
{
	printf("*****************************\n");
	printf("a) 洋鲫($%.2f/磅)\t\t", FOOD1);
	printf("b) 甜菜($%.2f/磅)\n", FOOD2);
	printf("c) 胡萝卜($%.2f/磅)\t\t", FOOD3);
	printf("q) 退出\n");
	printf("*****************************\n");
}
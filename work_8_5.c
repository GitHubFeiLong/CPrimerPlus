#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int guessNum = 50;
	int min = 1;
	int max = 100;
	char c;
	bool guessSure = 0;

	printf("����׼��һ��1-100����������˵��һ�����֣�"
		"��ش���ˣ�b���� С�ˣ�x����ȷ��s��,"
		"����q�˳�����");

	while (!guessSure)
	{
		printf("��׼�����ǣ�%d?", guessNum);
		while (scanf("%c", &c) != 1)
		{
			
		}
		switch (c)
		{
		case 'b':
			max = guessNum;
			guessNum = guessNum - (guessNum - min) / 2;
			break;
		case 'x':
			min = guessNum;
			guessNum = (max - guessNum) / 2 + guessNum;
			break;
		case 's':
			printf("�²���ȷ%d\n", guessNum);
			guessSure = 1;
			break;
		case 'q':
			goto A;
			break;
		default:
			printf("%c ��һ�������ѡ��,���������룬���ˣ�b���� С�ˣ�x������q�˳�����", c);
			break;
		}
	}
	A:
	printf("Bye!\n");

	return 0;
}
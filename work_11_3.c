#include <stdio.h>
#include <ctype.h>
#define WORDS 3
#define LEN 10

void input(char p[][LEN]);

int main(void)
{
	char words[WORDS][LEN];
	int i;

	input(words);
	for (i = 0; i < WORDS; i++)
		puts(words[i]);

	return 0;
}

void input(char p[][LEN])
{
	int i, j;
	char c;
	_Bool flag = 0;

	printf("�����뵥�ʣ�\n");
	for (i = 0; i < WORDS; i++)
	{
		j = 0;
		
		while ((c = getchar()) != '\n')
		{
			// �հ��ַ���������е���
			if (isspace(c) && flag)
				break;
			// ���ǿհ��ַ�������Ҫ��¼���ʡ�
			if (!isspace(c))
			{
				*(*(p + i) + j++) = c;
				flag = 1;
			}
		}
		// ���Ͽ��ַ����ַ���ĩβ
		*(*(p + i) + j) = '\0';
		// �ָ���ʶ
		flag = 0;
		// ��c���ǻس�˵�����л����ַ���Ҫ���䶪������
		if (c != '\n')
			while (getchar() != '\n')
				continue;
	}

	
}
#include <stdio.h>
#include <ctype.h> // ����isalpha()�ĺ���ԭ��

int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch)) // ���ch��һ����ĸ���ط���ֵ�����򷵻�0.
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);

	return 0;
}
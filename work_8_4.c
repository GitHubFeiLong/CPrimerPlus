#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int nums[52];
	int i, j, temp = 0;
	char c;
	j = 0;

	for (i = 0; i < 52; i++)
		nums[i] = 0;

	// ʹ�� Enter��Ctrl+Z��Enter �����롱 EOF
	while ((c = getchar()) != EOF)
	{
		// �Ƿ���Сд��ĸ
		if (islower(c))
		{
			nums[(int)c - 97 + 26] += 1;
		}
		else if (isupper(c))
		{
			nums[(int)c - 65] += 1;
		}
	}
	printf("Сд��ĸ\n");
	for (i = 0, j = 0; i < 26; i++)
	{
		;
		temp = i + 65;
		printf("%c:%d\t", temp, nums[i]);
		if (++j >= 5)
		{
			printf("\n");
			j = 0;
		}
	}

	printf("\n��д��ĸ\n");
	for (i = 26, j = 0; i < 52; i++)
	{
		temp = i + 97 - 26;
		printf("%c:%d\t", temp, nums[i]);
		if (++j >= 5)
		{
			printf("\n");
			j = 0;
		}
	}

	return 0;
}
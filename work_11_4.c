#include <stdio.h>
#include <ctype.h>
#define WORD 4
#define LEN 20

void input(char c[][LEN], int num);

int main(void)
{
	char c[WORD][LEN];
	int i;

	printf("Enter:\n");
	input(c, 5);
	for (i = 0; i < WORD; i++)
		puts(c[i]);

	return 0;
}

void input(char words[][LEN], int num)
{
	_Bool flag = 0;
	char c;
	int i, j;

	for (i = 0; i < WORD;)
	{
		j = 0;
		while ((c = getchar()) != '\n' && j < num)
		{
			if (isspace(c) && flag)
				break;
			if (!isspace(c))
			{
				words[i][j] = c;
				flag = 1;
				j++;
			}
		}
		if (j > 0)
		{
			flag = 0;
			words[i][j] = '\0';
			// ¶ÁÈ¡Ê£Óà×Ö·û
			if (c != '\n')
				while (getchar() != '\n')
					continue;
			i++;
		}
		
	}
	
}
#include <stdio.h>
#define BEGIN_NUM 5
#define MAX 150

int main(void)
{
	int weeks = 1, friends = 5;
	const int sub = 1, multiple = 2;

	while (friends < MAX)
	{
		friends = (friends - sub) * multiple;
		weeks++;
	}
	printf("����%d�ܣ����������ﵽ��%d", weeks, friends);

	return 0;
}
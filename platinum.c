/* platinum.c -- your weight in platinum */
#include <stdio.h>

int main(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf_s("%f", &weight);

	value = 1700.0F * weight * 14.5833F;

	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("Your are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}
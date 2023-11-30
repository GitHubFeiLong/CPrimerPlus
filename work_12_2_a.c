#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
static int m;
static int k;
static float l;

void set_mode(int mode)
{
	if (mode == 0)
		m = 0;
	else if (mode == 1)
		m = 1;
	else
	{
		printf("Invalid mode specified. Mode 1(US) uesd");
		m = 1;
	}
}

void get_info()
{
	printf("Enter distance traveled in %s:", m == 0 ? "kilometers" : "miles");
	scanf("%d", &k);
	printf("Enter fuel consumer in %s:", m == 0 ? "liters" : "gallons");
	scanf("%f", &l);
}
void show_info()
{
	if (m == 0)
	{
		printf("Fuel consumption is %.2f liters per %d km\n",
			l / k * 100);
	}
	else
	{
		printf("Fuel consumption is %.1f miles per gallon\n", k / l);
	}
	
}
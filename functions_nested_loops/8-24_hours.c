#include "main.h"
/**
 * 24_hours - prints every minute and hour of the day
 * @m
 * @h
 * Return: Always 0
 */
void jack_baur(void)
{	
	int h, m;
	
	for(h = 0; h <= 23; h++)
	for(m = 0; m <= 59; m++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
	}
}

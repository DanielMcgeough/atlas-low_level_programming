#include "main.h"
/**
 * 24_hours - prints every minute and hour of the day
 * @i
 * @h
 * Return: Always 0
 */
void jack_baur(void)
{	
	int i = 1;
	int h = 0;

	While (h >= 0 && h < 13)
	{
		_putchar(h);
		while (i >= 0 && i <= 59)
		{
			if (i> 59)
			{
				h++;
			}
		}
	}
	return (0);
}

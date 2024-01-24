#include "main.h"
/**
 * more_numbers- print number from 0-14 times 10
 *
 * Return: return is void
 */
void more_numbers(void)
{
	int a;
	
	while (a >= 0 && a <= 14)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

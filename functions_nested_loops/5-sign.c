#include "main.h"
/**
 * sign - based on if n is pos, neg, or eq to 0
 *@n: int input
 * Return: 1 if pos, 0 if eq, -1 if neg
 */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
return (0);
}

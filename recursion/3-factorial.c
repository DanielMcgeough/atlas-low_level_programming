#include "main.h"
/**
 * factorial- returns factorial of number
 * @n: given number
 *
 * Return: returns an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"
/** 
 * _pow_recursion- raises x to pow of y
 *@x: given int
 *@y: power to raise x to
 *
 * Return: returns an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

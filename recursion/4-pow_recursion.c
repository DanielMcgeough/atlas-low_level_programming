#include "main.h"
/** _pow_recursion- raises x to pow of y
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
		return (x);
	}
	else if (y > 0)
	{
		return ( x * y(x, y -1);
	}
}

#include "main.h"
/** _sqrt_recursion- returns nat sqrt of a number
 * @n: number passed in
 *
 * Return: returns an int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int calsqrt(int n, int d)
{
	if (n < 0 || d == n)
	{
		return(-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (d * d == n)
	{
		return (d);
	}
	return (calsqt(n, d + 1));
}

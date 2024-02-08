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

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	else if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

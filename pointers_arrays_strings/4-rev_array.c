#include "main.h"
/**
 * rev_array- function that reverses array of ints
 * @a: pointer to int
 * @n: int passed in
 *
 * Return: return is void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

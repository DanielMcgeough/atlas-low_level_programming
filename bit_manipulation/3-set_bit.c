#include "main.h"

/**
 * set_bit- sets the value of a bit to a 1 at index
 * @n: some long int to change
 * @index: pos of int to change
 * Return: returns an int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

#include "main.h"

/**
 * clear_bit- set the value of a bit to 0
 * @n: number at pos
 * @index: pos
 * Return: returns an int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

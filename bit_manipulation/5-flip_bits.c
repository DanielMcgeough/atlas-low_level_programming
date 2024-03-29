#include "main.h"

/**
 * flip_bits- function that gives number of bits
 * you would need to flip to get from one number to another.
 * @n: an int, first number
 * @m: a different long int, the number to flip to
 * Return: returns an int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 0;
	int theCount = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			theCount++;
	}

	return (theCount);
}

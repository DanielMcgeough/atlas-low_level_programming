#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range- create an arr of ints
 * @min: min val of an int
 * @max: max val of an int
 * Return: returns an int
 */
int *array_range(int min, int max)
{
	int *a, b = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}

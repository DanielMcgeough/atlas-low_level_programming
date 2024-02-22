#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - funct that searchers for int
 * @array: array of ints
 * @size: size of array
 * @cmp: function that takes an int as argument
 * Return: returns an int from array
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}


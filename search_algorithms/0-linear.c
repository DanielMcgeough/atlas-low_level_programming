#include "search_algos.h"

/**
* linear_search- conducts a linear search through an array
* @array: pointer to array
* @size: size of array
* @value: values to search for
* Return: returns an int
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

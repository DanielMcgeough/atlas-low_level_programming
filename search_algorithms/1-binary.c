#include "search_algos.h"
/**
* binary_search- conducts a binary search
* @array: pointer to array of values
* @size: size of array
* @value: values to search for
* Return: returns an int, index of value
*/

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(&array[low], (high - low + 1));
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

/**
* print_array- prints an array
* @array: array to print
* @size: size of array
* Return: returns a void
*/

void print_array(const in *array, size_t size)
{
	size_t i = 0;

	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

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
		mid = (low + high) / 2;
		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

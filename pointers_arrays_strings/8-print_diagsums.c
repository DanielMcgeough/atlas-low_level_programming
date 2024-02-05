#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- print the sum of diagonals
 * @i: integer passed in
 * @j: integer passed in as well.
 *
 * Return: Return is void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	while (a[i] < size)
	{
		i++;
	}
	while (a[j] < size)
	{
		j++;
	}
	
	printf("%d", i + j);
}	

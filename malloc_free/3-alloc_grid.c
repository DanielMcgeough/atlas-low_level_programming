#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- point to a 2d array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: returns an int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (withd <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0: i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		{
	{
}

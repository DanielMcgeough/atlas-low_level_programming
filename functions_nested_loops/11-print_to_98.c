#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints form 0 to 98
 *@n: initial variable
 *@i: new values for counting
 *Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
	}
	else
	{
		for (i = n; i <= 98; i++)
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz- identifes multiple of 3 and 5 and both
 *
 * Return: Return always 0
 */
void Fizz_Buzz(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("fizz");
		}
		else if (a % 5 = 0)
		{
			printf("buzz");
		}
		else if (a % 3 = 0 && a % 5 = 0)
		{
			printf("fizzbuzz");
		}
		else
		{
		printf(a);
		}
	}
}

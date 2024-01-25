#include "main.h"
#include <stdio.h>
/**
 * Fizz_Buzz- identifes multiple of 3 and 5 and both
 *
 * Return: Return always 0
 */
void Fizz_Buzz(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
		printf("%d", a);
		}
	}
}

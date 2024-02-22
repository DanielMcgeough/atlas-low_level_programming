#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - pretty self explanatory
 * @separator: text in between ints
 * @n: number of ints
 * @...: number or arguments passed in
 * Return: returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

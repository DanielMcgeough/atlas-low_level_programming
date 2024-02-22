#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of args passed in.
 * @n: the number of parameters passed to the function.
 * @...: some random arguments
 * Returns: returns sum as int
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}

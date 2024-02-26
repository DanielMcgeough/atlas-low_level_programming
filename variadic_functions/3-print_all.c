#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_all - self explanatory
 * @format: list of formats in form of args
 *
 * Return: returns void
 */
void print_all(const char * const format, ...)
{
       va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_a_char - prints a char
 * @separator: the separator
 * @args: list of args
 *
 * Return is void
 */
void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_a_integer - prints an int
 * @separator: separator of int
 * @args: list of args
 *
 * Return: returns a void
 */
void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
{

/**
 * print_a_float - prints a floating num
 * @separator: the separator
 * @args: list of args
 * 
 * Return: returns a void
 */
void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_a_char_ptr - prints a char pointer
 * @separator: the separator
 * @args: list of args
 *
 * Return: returns a void
 */
void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - sums them all
 * @separator: pointer to string to separate values
 * @n: number of args
 * Return: sum.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list  va_print;
	unsigned int i;

	va_start(va_print, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(va_print, int));
	}
	else
	{
		printf("%d", va_arg(va_print, int));
		for (i = 0; i < n - 1; i++)
		{
			printf("%s %d", separator, va_arg(va_print, int));
		}
	}
	printf("\n");
	va_end(va_print);
}

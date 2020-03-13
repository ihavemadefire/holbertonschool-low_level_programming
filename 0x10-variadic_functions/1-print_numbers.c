#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums them all
 * @n: number to be summed
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
		printf("%d",va_arg(va_print, int));
		for (i = 0; i < n -1; i++)
		{
			printf("%s %d", separator, va_arg(va_print, int));
		}
	}
	printf("\n");
	va_end(va_print);
}

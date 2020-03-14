#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer to string to separate values
 * @n: number of args
 * Return: sum.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list  va_print;
	unsigned int i;

	va_start(va_print, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			if (va_arg(va_print, char *) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(va_print, char *));
	}
	else
	{
		printf("%s", va_arg(va_print, char *));
		for (i = 0; i < n - 1; i++)
		{
			printf("%s%s", separator, va_arg(va_print, char *));
		}
	}
	va_end(va_print);
	printf("\n");
}

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
	char *ch;

	va_start(va_print, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(va_print, char*);
		if (ch)
		{
			printf("%s", ch);
		}
		else
			printf("(nil)");
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(va_print);
}

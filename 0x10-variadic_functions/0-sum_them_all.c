#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums them all
 * @n: number to be summed
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list  va_sum;
	unsigned int i, sum;

	sum = 0;
	va_start(va_sum, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va_sum, unsigned int);
	}
	va_end(va_sum);
	return (sum);
}

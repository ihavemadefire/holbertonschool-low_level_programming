#include "holberton.h"
/**
 *factorial - Returns factorial of passed number
 *@n: integer to be factorialized
 * Return: value of factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

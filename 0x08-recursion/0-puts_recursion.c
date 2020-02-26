#include "holberton.h"
/**
 *_puts_recursion - Simulates puts using recursion
 *@s: pointer to a string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s+1);
	}
	else
		_putchar(10);
}

#include "holberton.h"
/**
 *_print_rev_recursion - Simulates puts using recursion
 *@s: pointer to a string to be printed
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}

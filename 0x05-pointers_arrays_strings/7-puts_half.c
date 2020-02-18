#include "holberton.h"

/**
 * puts_half - function that takes a pointer and returns the length of the
 *               string
 * @s: Passed pointer
 *
 * Return: No return value for puts_half
 */
int string_length(char *s);
void puts_half(char *s)
{
	int length;
	int k;

	length = string_length(s);
	if (length % 2 == 0)
	{
		for (k = (length / 2); k < length; k++)
			_putchar(*(s + k));
	}
	else
	{
		for (k = ((length + 1) / 2); k < length; k++)
			_putchar(*(s + k));
	}
	_putchar(10);
}
/**
 * string_length - returns length of string
 *
 * @s: Passed pointer
 *
 * Return: returns length of string
 */
int string_length(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}

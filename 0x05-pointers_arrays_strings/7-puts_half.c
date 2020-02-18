#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - function that takes a pointer and returns the length of the
 *               string
 * @s: Passed pointer
 *
 *
 */
int string_length(char*);
void puts_half(char *s)
{
	int length;
	int k;

	length =string_length(s);
	if (length % 2 == 0)
	{
		for(k = (length / 2); k < length; k++)
			_putchar(*(s + k));
	}
	else
	{
		for(k = ((length - 1) / 2); k < length; k++)
			_putchar(*(s + k));
	}
	_putchar(10);
}

int string_length(char *ch)
{
	int c = 0;

	while( *(ch + c) != '\0' )
		c++;
	return c;
}

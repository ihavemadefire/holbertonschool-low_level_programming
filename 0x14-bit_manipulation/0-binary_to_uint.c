#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to uint
 * @b: binary to be printed
 * Return: unsigned int of binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, base;
	int i;

	dec = 0;
	base = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i + 1] != '\0'; ++i)
		;
	for (; i >= 0; i--)
	{
		if ((b[i] == '0') || (b[i] == '1'))
		{
			if (b[i] == '1')
				dec += base;
			base *= 2;
		}
		else
			return (0);
	}
	return (dec);
}

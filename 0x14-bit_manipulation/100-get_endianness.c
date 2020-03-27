#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - determans endianness
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}

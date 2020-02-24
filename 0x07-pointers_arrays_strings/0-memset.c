#include "holberton.h"
/**
 **_memset - fills memory with a constant byte
 *@s: Destination in memory
 *@b: Constant to be copied
 *@n: number of bytes to be filled
 *
 *Return: memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i =0; i < n; i ++)
	{
		s[i] = b;
	}
	return (s);
}

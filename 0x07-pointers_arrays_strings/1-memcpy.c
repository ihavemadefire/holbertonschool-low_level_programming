#include "holberton.h"
/**
 **_memcpy - fills memory with a constant byte
 *@dest: Destination in memory
 *@src: Constant to be copied
 *@n: number of bytes to be filled
 *
 *Return: memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] =  src[i];
	}
	return (dest);
}

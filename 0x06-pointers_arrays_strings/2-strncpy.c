#include "holberton.h"
/**
 *_strncpy - returns a concatednated char pointer
 *@dest: destination to be concatenated to
 *@src: to be cated
 *@n: max number of bytes from src
 *
 *Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}

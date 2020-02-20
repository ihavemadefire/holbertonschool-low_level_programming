#include "holberton.h"
/**
 *_strncat - returns a concatednated char pointer
 *@dest: destination to be concatenated to
 *@src: to be cated
 *@n: max number of bytes from src
 *
 *Return: conceatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0, j = 0; *(dest + i) != '\0'; i++, j++)
		;
	for (j = 0; *(src + j) != '\0'; j++, i++)
		if (j < n)
			*(dest + i) = src[j];
	i++;
	*(dest + i) = '\0';
	return (dest);
}

#include "holberton.h"

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0, j = 0; *(dest + i) != '\0'; i++, j++)
		;
	for (j = 0; *(src + j) != '\0'; j++, i++)
		*(dest + i) = src[j];
	i++;
	*(dest + i) = '\0';
	return(dest);
}

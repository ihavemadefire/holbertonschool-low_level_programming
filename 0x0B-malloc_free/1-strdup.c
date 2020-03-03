#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup(char *str) - Copies string into allocated mem
 *@size: Size of string to be allocated
 *
 *Return: pointer to allocated array
 */
char *_strdup(char *str)
{
	char *ch;
	int i, j;

	for (j = 0; str[j] != '\0' ; j++)
	{
	}
	ch = malloc((j) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; ++i)
		ch[i] = str[i];
	ch[i] = '\0';
	return (ch);
}

#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - Copies string into allocated mem
 *@str: Pointer to string to be copied
 *
 *Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *ch;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0' ; j++)
	{
	}
	ch = malloc((j + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
		ch[i] = str[i];
	return (ch);
}

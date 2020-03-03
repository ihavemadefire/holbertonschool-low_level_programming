#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Creates array
 *@size: Size of array to be allocated
 *@c: Charater to initialize the array with
 *Return: pointer to allocated array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL)
	}
	ch = malloc((size) * sizeof(char));
	for (i = 0; i < size; ++i)
		ch[i] = c;
	ch[i] = '\0';
	return (ch);
}

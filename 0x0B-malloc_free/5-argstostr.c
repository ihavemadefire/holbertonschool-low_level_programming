#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - convert arguments on command line to strings
 * @ac: passed from main
 * @av: pointer to array of passed strings
 * Return: arguments as line separated strings
 */

char *argstostr(int ac, char **av)
{
	int length, x, y, z = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);   /*check for 0 args*/
		                 /*and for a null ptr */
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{/*length of each string*/
			length++;
		}
	}
	length++;/*one for the final char*/

	ptr = malloc(sizeof(char) * length); /*alloc the space*/
	if (ptr == NULL)/*if alloc fails...*/
	{
		return (NULL); /*return NULL*/
	}
	for (x = 0; x < ac; x++)/*for each word*/
	{
		for (y = 0; av[x][y]; y++)/*for each letter*/
		{
			ptr[z] = av[x][y];
			z++;
		}
		ptr[z] = '\n';/*each word gets a new line*/
		z++;
	}
	ptr[z] = '\0';/*terminating null character*/
	return (ptr);
}

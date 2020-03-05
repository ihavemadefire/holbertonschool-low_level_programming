#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * calloc - function to allocate and initialize array
 * @nmeb: number of elements
 * @size: size of each element to be alloced
 * Return: array init'd to 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)/*validate inputs*/
		return (NULL);
	ptr = malloc(nmemb * size);/*alloc space*/
	if (ptr == NULL)/*check for alloc fail */
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		{/*init each element to 0*/
			ptr[i] = 0;
		}
	return (ptr);
}

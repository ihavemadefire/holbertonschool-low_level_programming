#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - alloc prev. alloced memory
 * @ptr: prev. alloced memory
 * @old_size: size of prev alloced space
 * @new_size: size of new alloc
 * Return:  return pointer to new alloc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (ptr == NULL)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size > old_size)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

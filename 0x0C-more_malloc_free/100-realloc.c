#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - alloc memory for an array
 * @ptr: prev. alloced memory
 * @min: min int
 * @max: max int
 * Return:  return pointer to array of ints
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

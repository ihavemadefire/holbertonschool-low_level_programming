#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - iterates over arran applys a func
 * @array: array to be searched
 * @size: size of array
 * @cmp: comparison functions
 * Return: index of find
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

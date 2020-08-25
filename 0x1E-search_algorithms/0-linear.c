#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - performs linear search
 * @array: array to be searched
 * @size: size
 * @value: value to be searched for
 * Return: index of value @ location or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	int size1 = size;
	int i;

	for (i = 0 ; i < size1 ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

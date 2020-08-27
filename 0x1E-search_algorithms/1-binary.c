#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: array to be searched
 * @size: size
 * @value: value to be searched for
 * Return: index of value @ location or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	return (binary_search_inner(array, l, r, value));
}
/**
 * binary_search_inner - performs binary search
 * @array: array to be searched
 * @l: left
 * @r: right
 * @value: value to be searched for
 * Return: index of value @ location or -1 on failure
 */
int binary_search_inner(int *array, int l, int r, int value)
{
	int mid, len, k, n;

	while (l <= r)
	{
		len = (r - l + 1);
		printf("Searching in array: %d", array[l]);
		for (k = l + 1, n = 0; n < len - 1; k++, n++)
			printf(", %d", array[k]);
		printf("\n");
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}

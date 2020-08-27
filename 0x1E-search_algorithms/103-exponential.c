#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - exponential jump search
 * @array: list to be searched
 * @size: size
 * @value: value to be found
 * Return: index of value or -1 on failure
 */

int exponential_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size;
	int size1 = size - 1;
	int i;

	if (right - left <= 0)
		return (-1);

	i = 1;
	while (i < right - left)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			i = i * 2;
		}
		else
			break;
	}
	if (i > size1)
	{
		printf("Value found between indexes [%d] and [%d]\n", i / 2, size1);
		return (binary_search_inner(array, i / 2, size1, value));
	}
	else
	{
		printf("Value found between indexes [%d] and [%d]\n", i / 2, i);
		/* Pass range to binary search*/
		return (binary_search_inner(array, i / 2, i, value));
	}
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

#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * advanced_binary - performs binary search
 * @array: array to be searched
 * @size: size
 * @value: value to be searched for
 * Return: index of value @ location or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	int l, r;

	l = 0;
	r = size - 1;
	if (array == NULL)
		return (-1);
	return (advanced_binary_inner(array, l, r, value));
}
/**
 * advanced_binary_inner - performs binary search
 * @array: array to be searched
 * @l: left
 * @r: right
 * @value: value to be searched for
 * Return: index of value @ location or -1 on failure
 */
int advanced_binary_inner(int *array, int l, int r, int value)
{
	int mid;

	if (r >= l)
	{
		/*Print the array each time*/
		printf("Searching in array: ");
		for (mid = l; mid < r; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		/*Get the midpoint*/
		mid = l + (r - l) / 2;
		/*Compare values*/
		/*Order matters in the second part of this if statement*/
		/*If previous value is checked first, it could be a seg fault*/
		if (array[mid] == value && (mid == l || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			return (advanced_binary_inner(array, l, mid, value));
		return (advanced_binary_inner(array, mid + 1, r, value));
	}
	return (-1);
}

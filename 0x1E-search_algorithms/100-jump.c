#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @array: list to be searched
 * @size: size
 * @value: value to be found
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
	int left = 0;
	int size1 = size;
	int right = sqrt(size1);
	int i;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	while (right < size1 && array[right] <= value)
	{
		if (array[right] >= value)
		{
			break;
		}
		left = right;
		right += sqrt(size1);
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && i < size1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

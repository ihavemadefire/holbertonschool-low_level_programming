#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: list to be searched
 * @size: size
 * @value: value to be found
 * Return: Always EXIT_SUCCESS
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (size - 1);
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1);
		}
	        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", (int)pos);
	return -1;
}

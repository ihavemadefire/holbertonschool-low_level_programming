#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function to iterate across an array of pointers
 *@array: array of ints
 *@size: size of array
 *@action: function to be actioned for each input
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

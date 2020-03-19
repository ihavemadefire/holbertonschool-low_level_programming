#include <stdio.h>
#include "lists.h"
/**
 * list_len - Prints elements of a linked list
 * @h: list to be measured
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}

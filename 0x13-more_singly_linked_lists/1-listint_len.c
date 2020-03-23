#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Prints elements of a linked list
 * @h: list to be measured
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}

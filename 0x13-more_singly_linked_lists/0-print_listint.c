#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints elements of a linked list
 * @h: list to be printer
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}

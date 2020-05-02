#include "lists.h"

/**
 * dlistint_len - Returns lenth of a list
 * @h: address of list of elements
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t length = 0;

	while (current != NULL)
	{
		length++;
		current = current->next;

	}
	return (length);
}

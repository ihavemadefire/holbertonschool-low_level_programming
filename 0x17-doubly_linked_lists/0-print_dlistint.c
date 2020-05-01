#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list
 * @h: address of list of elements
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = rewnd(h);
	size_t length = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		length++;
		current = current->next;

	}
	return (length);
}
/**
 * rewnd - Prints all the elements of a list
 * @h: address of list of elements
 * Return: pointer to head
 */

const dlistint_t *rewnd(const dlistint_t *h)
{
	const dlistint_t *temp = h;

	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}
	return (temp);
}

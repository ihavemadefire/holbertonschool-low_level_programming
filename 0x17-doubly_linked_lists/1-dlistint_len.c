#include "lists.h"

/**
 * dlistint_len - Returns lenth of a list
 * @h: address of list of elements
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = rewnd(h);
	size_t length = 0;

	while (current != NULL)
	{
		length++;
		current = current->next;

	}
	return (length);
}
/**
 * rewnd - rewinds to head of list
 * @h: address of list of elements
 * Return: pointer to head of list
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

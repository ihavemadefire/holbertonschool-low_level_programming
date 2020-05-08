B#include "lists.h"

/**
 * insert_dnodeint_at_index - Gets node at given index
 * @h: Head of ll to be scanned
 * @idx: index to be returned
 * @n: integer payload
 * Return: pointer to node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL || idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	new->next->prev = new;
	return (new);
}

#include "lists.h"

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
	if (*h == NULL)
	{
		new->prev = (NULL);
		new->next = (NULL);
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return(new);
	}
	temp = *h;
	while (new != NULL)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			new->prev->next = new;
			temp->prev = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}

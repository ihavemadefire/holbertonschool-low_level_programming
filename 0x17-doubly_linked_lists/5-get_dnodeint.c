#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at given index
 * @head: Head of ll to be scanned
 * @index: index to be returned
 * Return: pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}

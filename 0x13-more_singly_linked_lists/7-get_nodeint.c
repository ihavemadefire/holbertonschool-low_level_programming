#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets and returns value at a given index
 * @head: head of ll to be searched
 * @index: index of value to be returned
 * Return: pointer to node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

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
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			tmp = head;
			return (tmp);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}

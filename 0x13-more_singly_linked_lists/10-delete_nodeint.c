#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - gets and returns value at a given index
 * @head: head of ll to be amended
 * @index: index of value to be returned
 * Return: 1for success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *tmp1 = NULL;
	unsigned int i = 0;

	if (head == NULL)/*Check for NULL input to function*/
		return (-1);
	tmp = *head;
	if (tmp == NULL)
	{
		return (-1);
	}
	if (index == 0)/*check for loop at 0 index*/
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	tmp1 = tmp->next;
	tmp->next = tmp1->next;
	free(tmp1);
	return (1);
}

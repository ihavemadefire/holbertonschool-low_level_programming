#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes value at a given index
 * @head: head of ll to be amended
 * @index: index of value to be returned
 * Return: 1for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmp1 = NULL;
	unsigned int i = 0;

	if (head == NULL)/*Check for NULL input to function*/
		return (-1);
	tmp = *head;
	if (tmp == NULL)
	{
		return (-1);
	}
	if (index == 0)/*check for 0 index*/
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
	tmp = tmp->prev;
	tmp->next = tmp1;
	tmp1->prev = tmp;
	free(tmp1);
	return (1);
}

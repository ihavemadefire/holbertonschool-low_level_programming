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
	unsigned int i;

	if (head == NULL || *head  == NULL)/*Check for NULL input to function*/
		return (-1);
	tmp = *head;
	if (index == 0)/*check for 0 index*/
	{
		*head = tmp->next;
		/*check for list of one*/
		if (tmp->next != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp->next->next == NULL)
	{
		tmp1 = tmp->next;
		free(tmp1);
		tmp->next = NULL;
		return (1);
	}
	tmp1 = tmp->next->next;
	tmp->next = tmp1;
	if (tmp->next->next != NULL)
		tmp->next->next->prev = tmp;
	free(tmp->next);
	tmp->next = tmp1;
	return (1);
}

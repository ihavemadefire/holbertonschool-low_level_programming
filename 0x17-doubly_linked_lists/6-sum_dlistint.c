#include "lists.h"
/**
 * sum_dlistint - summs the content of a ll
 * @head: ll to be summed
 * Return: int sum of list contents
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		i += node->n;
		node = node->next;
	}
	return (i);
}

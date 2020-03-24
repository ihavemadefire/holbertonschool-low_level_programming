#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of the contents of a ll
 * @head: pointer to beginning of list
 * Return: sum of ll contents
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int i = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}

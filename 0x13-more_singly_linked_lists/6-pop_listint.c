#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;

	if (*head == NULL)
		return (0);

	pop = *head;
	i = pop->n;
	*head = pop->next;
	free(pop);
	return (i);
}

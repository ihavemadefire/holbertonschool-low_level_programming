#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - removes first element of a linked list
 * @head: pointer to pointer of LL
 * Return: 0 if list is empty; otherwise, pop contents
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	pop = *head;
	i = pop->n;
	*head = pop->next;
	free(pop);
	return (i);
}

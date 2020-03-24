#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - Prints elements of a linked list
 * @head: list to be printer
 * Return: number of elements
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *end = NULL;

	if (head == NULL)
		return (NULL);

	current = *head;
	while (current != NULL)
	{
		current = current->next;/*if current is the only value, exit*/
		current = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = current;
	}
	*head = end;
	return (*head);
}

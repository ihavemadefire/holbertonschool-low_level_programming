#include "lists.h"
/**
 * free_dlistint - frees each element of a linked list
 * @head: pointer to head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}

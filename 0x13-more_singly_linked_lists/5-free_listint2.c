#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees each element of a linked list
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp1 = NULL;

	if (head == NULL)
		return;
	temp = *head; /*bounce dereferenced head*/
	while (temp != NULL)
	{
		temp1 = temp;
		free(temp1);
		temp = temp->next;
	}
	*head = NULL;
}

#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees each element of a linked list
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}

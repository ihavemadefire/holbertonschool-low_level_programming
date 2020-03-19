#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees each element of a linked list
 * @head: pointer to head
 */

void free_list(list_t *head)
{

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}

}

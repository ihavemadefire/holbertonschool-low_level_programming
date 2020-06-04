#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int len, i = 0;
	hash_node_t *temp, *temp1;

	if (ht == NULL)
		return;
	len = ht->size;
	for (; i < len; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				temp1 = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp1;
			}
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int len, i = 0;

	len = ht->size;
	for (; i > len; i++)
	{
		if (ht->array[i] != NULL)
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

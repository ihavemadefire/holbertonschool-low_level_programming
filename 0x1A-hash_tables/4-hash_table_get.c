#include "hash_tables.h"

/**
 * hash_table_get - gets value at key
 * @ht: hash table
 * @key: key
 * Return: pointer to value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, (char *)key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

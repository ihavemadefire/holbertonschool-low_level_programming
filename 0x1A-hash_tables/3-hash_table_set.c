#include "hash_tables.h"

/**
 * hash_table_set -
 * @ht: table to be set
 * @key: key
 * @value: value
 * Return: 0 if successful, 1 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index]->key == NULL)
	{
		/*for an empty block*/
		ht->array[index]->key = (void *)key;
		ht->array[index]->value = (void *)value;
		ht->array[index]->next = NULL;
		return (0);
	}
	else if (strcmp(ht->array[index]->key, key))
	{
		/*For an update*/
		ht->array[index]->value = (void *)value;
		return (0);
	}
	/*Check for replace downlist*/
	/*Make new node down list*/
	else
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
		{
			return (-1);
		}
		new->value = (void *)value;
		new->key = (void *)key;
		new->next = ht->array[index];
		return (0);
	}
}

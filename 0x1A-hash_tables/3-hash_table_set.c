#include "hash_tables.h"
/**
 * hash_table_set - Sets hash table
 * @ht: table to be set
 * @key: key
 * @value: value
 * Return: 0 if successful, 1 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;
	char *dupkey = (char *)strdup(key);
	char *dupvalue = (char *)strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		/*for an empty block*/
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		ht->array[index] = new;
		new->key = dupkey;
		new->value = dupvalue;
		new->next = NULL;
		return (1);
	}
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, dupkey) == 0)
			{
				temp->value = dupvalue;
				return (0);
			}
			temp = temp->next;
		}
		temp = ht->array[index];
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->value = dupvalue;
		new->key = dupkey;
		new->next = temp;
		ht->array[index] = new;
		return (1);
	}
}

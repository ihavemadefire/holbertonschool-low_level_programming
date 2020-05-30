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
	char *dupkey, *dupvalue;

	if (key == NULL)
		return (0);
	dupkey = (char *)strdup(key);
	dupvalue = (char *)strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		ht->array[index] = new;
		fill_first(new, dupkey, dupvalue);
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
/**
 * fill_first - fills first to workaround betty
 * @new: Node
 * @dupkey: key
 * @dupvalue: value
 */
void fill_first(hash_node_t *new, char *dupkey, char *dupvalue)
{
	new->key = dupkey;
	new->value = dupvalue;
	new->next = NULL;
}

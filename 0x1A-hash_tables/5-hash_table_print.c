#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int len, i = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	len = ht->size;
	printf("{");
	for (i = 0; i < len; i++)
	{
		if (flag > 0 && ht->array[i] != NULL)
		{
			printf(", ");
		}
		if (ht->array[i] != NULL)
			flag++;
		print_list(ht->array[i]);
	}
	printf("}\n");
}
/**
 * print_list - prints lists
 * @node: not to be printed
 */
void print_list(hash_node_t *node)
{
	if (node != NULL)
	{
		printf("\'%s\': \'%s\'", node->key, node->value);
		node = node->next;
	}
	while (node != NULL)
	{
		printf(", \'%s\': \'%s\'", node->key, node->value);
		node = node->next;
	}
}

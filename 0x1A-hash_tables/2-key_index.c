#include "hash_tables.h"

/**
 * key_index - Returns the index value of a hash key
 * @size: size of list
 * @key: passed hash key
 * Return: index to store value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ret;

	ret = (hash_djb2(key) % size);
	return (ret);
}

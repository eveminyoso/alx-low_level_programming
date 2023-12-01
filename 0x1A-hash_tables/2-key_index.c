#include "hash_tables.h"
/**
 *key_index - gives the index of the key
 *@key:key specified
 *@size: the size of array
 *Return:the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_value = hash_djb2(key);

	index = hash_value % size;

	return (index);
}

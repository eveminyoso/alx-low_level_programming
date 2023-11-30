#include <stdlib.h>
#include "hash_tables.h"

/**
 *main - Returns a pointer
 *@size: size of hash table
 *
 * Return: NULL
 */


HashTable *createHashTable(unsigned long int size)
{
	if (size == 0)
	{
		return (NULL);
	}

	HashTable *hashtable = (HashTable *)malloc(sizeof(HashTable));

	if (hashtable == NULL)
	{

		return (NULL);
	}

	hashtable->size = size;

	hashtable->table = (KeyValuePair **)malloc(sizeof(KeyValuePair *) * size);
	if (hashtable->table == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	for (unsigned long int i = 0; i < size; ++i)
	{
		hashtable->table[i] = NULL;
	}

	return (hashtable);
}

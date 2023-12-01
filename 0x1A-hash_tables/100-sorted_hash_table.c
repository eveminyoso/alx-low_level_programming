#include "hash_tables.h"
/**
 *shash_table_create - creates my table
 *@size:size of table
 *Return:new table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));


	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}
/**
 *shash_table_set - add value to the table
 *@ht:hash table
 *@key:key
 *@value:my value
 *Return:something
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *prev;
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	current = ht->shead;
	prev = NULL;
	while (current != NULL && strcmp(current->key, key) < 0)
	{
		prev = current;
		current = current->snext;
	}
	new_node->sprev = prev;
	new_node->snext = current;
	if (prev != NULL)
		prev->snext = new_node;
	else
		ht->shead = new_node;
	if (current != NULL)
		current->sprev = new_node;
	else
		ht->stail = new_node;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
/**
 *shash_table_get - gets value using key
 *@ht:hash table
 *@key:key
 *Return:value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;


	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	current = ht->shead;
	while (current != NULL && strcmp(current->key, key) != 0)
		current = current->snext;
	return ((current != NULL) ? current->value : NULL);
}
/**
 *shash_table_print - prints hash table
 *@ht:hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	current = ht->shead;
	if (ht == NULL)
		return;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
		{
			printf(", ");
		}
		current = current->snext;
	}
	printf("}\n");
}
/**
 *shash_table_print_rev - prints table in reverse
 *@ht:hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	current = ht->stail;
	if (ht == NULL)
		return;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
		{
			printf(", ");
		}
		current = current->sprev;
	}
	 printf("}\n");
}
/**
 *shash_table_delete - deletes table
 *@ht:the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	current = ht->shead;
	while (current != NULL)
	{
		temp = current;
		current = current->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}

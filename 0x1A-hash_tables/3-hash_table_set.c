#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - sets a hash table key value pair in hash table
 * @ht: hash table to set in
 * @key: key to generate hash value and index off
 * @value: value to set as hash_node's value
 *
 * Return: (1) success, (0) failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
{
	unsigned long int key_i = 0;
	char *val_copy = NULL, *key_copy = NULL;
	hash_node_t *new_node = NULL, *temp_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	val_copy = strdup(value);
	if (!val_copy)
		return (0);
	key_copy = strdup(key);
	if (!key_copy)
	{
		free(val_copy);
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)

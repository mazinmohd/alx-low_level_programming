#include "hash_tables.h"
/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table
  * @key: the key
  * @value: the value of the key
  *
  * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *cp_value;
	unsigned long int i, index;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
	{
		free(cp_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = cp_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

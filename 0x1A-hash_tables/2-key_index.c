#include "hash_tables.h"
/**
  * key_index - gives the index of a key
  * @key: the key of hash table
  * @size: the size of hash table
  *
  * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}

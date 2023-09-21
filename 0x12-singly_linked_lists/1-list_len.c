#include "lists.h"
/**
 * list_len - count the length of linked list
 * @h: the linke list
 * Return: the length of linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}


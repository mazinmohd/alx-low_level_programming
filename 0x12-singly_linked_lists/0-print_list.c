#include "lists.h"
/**
 * print_list - print the linked list
 * @h: the linked list
 *
 * Return: the output of list
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}


#include "lists.h"
/**
  * print_dlistint - print all the elements of a linked list
  * @h: the linked list
  * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i;

	for (i = 0; h->next != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

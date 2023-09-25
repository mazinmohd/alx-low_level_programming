#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a linked list
 * @head: first element of the list
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
		head = head->next;

	return (head);
}


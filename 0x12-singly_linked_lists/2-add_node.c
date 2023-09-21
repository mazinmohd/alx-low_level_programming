#include "lists.h"
/**
 * add_node - adds a new node at the beginnig of the linked list
 * @head: pointer to the first element in the linked list
 * @str: the new string in the beginnig
 * Return: the new string
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *first;

	first = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		first->str = NULL;
		first->len = 0;
		first->next = *head;
	}

	if (first == NULL)
		return (NULL);

	first->next = *head;
	*head = first;

	first->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	first->len = i;

	return (first);
}


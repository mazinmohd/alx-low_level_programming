#include "lists.h"

/**
 * add_node_end - function add a new node at the end of a linked list
 * @head: the first element in linked list
 * @str: the new node in linked list
 * Return: List with new node
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *end;
	list_t *temp;

	end  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (end == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = end;
		end->len = i;
		end->str = strdup(str);
		end->next = NULL;
		return (end);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = end;

	end->len = i;
	end->str = strdup(str);
	end->next = NULL;

	return (end);

}

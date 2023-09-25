#include "lists.h"
/**
 * add_nodeint - add node to the beginning of the list
 * @head: first element of the list
 * @n: the data of new element
 * Return: the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}


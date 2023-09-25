#include "lists.h"
/**
 * pop_listint - delete the head node of the list
 * @head: first element of the list
 * Return: 0 if success
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	pop = *head;
	n = pop->n;
	temp = pop->next;

	free(pop);

	*head = temp;

	return (n);

}


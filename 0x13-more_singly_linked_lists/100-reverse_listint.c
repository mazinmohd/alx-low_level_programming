#include "lists.h"
/**
 * reverse_listint - function that reverse the linked list
 * @head: first element of linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *temp = NULL;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = temp;
	}

	*head = pre;

	return (*head);
}

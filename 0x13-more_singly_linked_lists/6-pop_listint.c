#include "lists.h"
/**
 * pop_listint - check the code
 * @head: parameter
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *point = *head;

	if (!head)
		return (0);
	else
	{
	*head = (*head)->next;
	return (point->n);
	}
}

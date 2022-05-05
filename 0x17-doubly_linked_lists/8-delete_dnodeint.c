#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @head: head
 * @index: position
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr = *head, *d;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index > 0)
	{
		for (i = 0; ptr; ptr = ptr->next, i++)
		{
			if (i == index - 1)
			{
				ptr->next->next->prev = ptr;
				d = ptr->next;
				ptr->next = ptr->next->next;
				free(d);
				return (1);
			}
		}
		if (index > i)
			return (-1);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(ptr);
	ptr = NULL;
	return (1);
}

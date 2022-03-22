#include "lists.h"
/**
 * sum_listint - check the code
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	for (i = 0; current; i++)
	{
		if (i == idx - 1)
		{	
			new->n = n;
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}

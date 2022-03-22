#include "lists.h"
/**
 * insert_nodeint_at_index - check the code
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
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
	if (idx > i)
		return (NULL);
	if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
	return (NULL);
}

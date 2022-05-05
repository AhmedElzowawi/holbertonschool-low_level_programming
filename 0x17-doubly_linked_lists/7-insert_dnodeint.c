#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code
 * @h: head
 * @idx: position
 * @n: number
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *ptr;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *h;
	if (idx > 0)
	{
		for (ptr = *h; ptr->next; ptr = ptr->next, i++)
		{
			if (i == idx)
			{
				ptr->next->prev = new;
				new->next = ptr->next;
				new->prev = ptr;
				ptr->next = new;
				return (new);
			}
		}
		if (idx > i)
			return (NULL);
		ptr->next = new;
		new->prev = ptr;
		new->next = NULL;
		return (new);
	}
	new->prev = NULL;
	new->next = *h;
	(*h)->prev = new;
	*h = new;
	return (*h);
}

#include "lists.h"
/**
 * add_nodeint_end - check the code
 * @head: parameter
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}

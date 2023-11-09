#include "lists'h"

/**
 *free_dlistint - Frees a list
 *@head: A pointer to the list head
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of the node
 * @index: index of the node, starting from 0
 * Return: NULL if node does not exist
 * */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head)
	{
		if (c == index)
			return head;
		head = head->next;
		c++;
	}
	return (NULL);
}

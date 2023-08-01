#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list
 *
 *@head: pointer to the head of list
 *
 *@str: string to be added
 *
 *Return:the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;
	int len;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}

#include "lists.h"

/**
 * get_dnodeint_at_index - gete nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 * Return: address of node on success, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int h = 0;

	if (!head)
		return (NULL);

	while (head && h < index)
	{
		head = head->next;
		h++;
	}

	return (head ? head : NULL);
}

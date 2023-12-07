/* this function returns nth index of a double linked list*/

#include "lists.h"

/**
 * get_dnodeint_at_index-function to find a node at certain index
 * @head: pointer to the list
 * @index: the index whose node to find
 * Return: the node  or NULL on failure or if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int n;

	ptr = head;
	n = 0;
	while (ptr->next != NULL)
	{
		if (n == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		n++;
	}
	return (NULL);
}

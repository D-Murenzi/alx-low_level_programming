/* this function adds a node at the end of a double linked list*/

#include "lists.h"

/**
 * add_dnodeint_end-fucntion that adds a new node at the end of a list
 * @head: pointer to pointer to a node
 * @n: integer element to include in new node
 * Return: pointer to new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *ptr1;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		ptr1 = *head;
		while (ptr1->next != NULL)
		{
			ptr1 = ptr1->next;
		}
		ptr1->next = ptr;
		ptr->prev = ptr1;
	}
	return (*head);
}

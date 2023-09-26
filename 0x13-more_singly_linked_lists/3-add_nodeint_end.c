/* this function adds a node at the end of linked list */

#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end-adds a new node at the end of a linked list
 * @head:pointer to a pointer containing the linked list
 * @n: the integer to include in new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (head == NULL)
	{
		head = &ptr;
		return (ptr);
	}

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	ptr->next = *head;

	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}

	(*head)->next = ptr;
	*head = ptr->next;
	ptr->next = NULL;
	return (ptr);
}

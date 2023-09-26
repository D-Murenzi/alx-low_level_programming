/* this function adds a new node at the start of a linked list*/

#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint-adds new node at the beggining of the linked list
 * @head:pointer to a pointer that holds the linked list
 * @n: avariable to store in a new node
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
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
	*head = ptr;
	return (ptr);
}

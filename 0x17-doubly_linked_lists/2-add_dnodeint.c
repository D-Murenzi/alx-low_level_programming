/* this function adds a new node at the beginning  of a doubly linked lists*/

#include "lists.h"

/**
 * add_dnodeint-adds a new node at doublelinked lists
 * @head: pointer to the pointer to the list
 * @n: the integer to include in new node
 * Return: a pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = ptr;
	}
	*head = ptr;
	return (*head);
}

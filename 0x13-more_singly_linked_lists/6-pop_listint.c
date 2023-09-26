/* this function deletes a head of linked list and returns its data integer*/

#include <stdio.h>
#include "lists.h"

/**
 * pop_listint-deletes the head node and returns its data
 * @head: pointet to a pointer containing the list
 * Return: integer stored in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int a;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	a = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (a);
}

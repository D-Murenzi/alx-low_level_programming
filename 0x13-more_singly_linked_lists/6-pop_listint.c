/* this function deletes a head of linked list and returns its data integer*/

#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t ptr;
	const int a;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	a = (*head)->n;
	*head = (head)->next;
	free(ptr);
	return (a);
}

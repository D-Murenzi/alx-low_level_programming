/* this function returns the elements in a doubly linked list*/

#include "lists.h"

/**
 * dlistint_len-function that returns anumber of elements in the list
 * @h: the pointer to a double linked list
 * Return: number of elements in linked lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t a;

	ptr = h;
	a = 0;
	while (ptr != NULL)
	{
		a++;
		ptr = ptr->next;
	}
	return (a);
}

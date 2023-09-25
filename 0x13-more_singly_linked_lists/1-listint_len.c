/* this function returns the number of elements in a linked list*/

#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int a;

	if (h == NULL)
	{
		return (0);
	}

	a = 1;
	ptr = h;
	while (ptr->next != NULL)
	{
		a++;
		ptr = ptr->next;
	}
	return (a);
}

/* this function returns the sum of all the elements of list*/

#include "lists.h"

/**
 * sum_dlistint-calculates the sum of all elements of list
 * @head: pointer to the list
 * Return: sum of all the elements of list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	sum = 0;
	if (head)
	{
		ptr = head;
		sum = ptr->n;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			sum = sum + ptr->n;
		}
	}
	return (sum);
}

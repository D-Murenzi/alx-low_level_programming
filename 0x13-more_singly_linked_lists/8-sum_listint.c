/* this function returns the sum of all integers stored in the linked list*/

#include <stdio.h>
#include "lists.h"

/**
 * sum_listint-calculates the sum of all data in list
 * @head:pointer to the list
 * Return: sum of the data in the list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}

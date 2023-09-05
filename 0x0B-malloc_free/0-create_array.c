/* this progrma contain fa function that  creates an array of certain size a*/
/* and its initialized with certain character */

#include "main.h"
/**
 * create_array-creates an array
 * @size: size of the array to be created
 * @c: characters to put in the array
 * Return:pointer to the  array if it succeds
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	int a;

	a = 0;
	b = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (b != NULL)
	{
		while (a < size)
		{
			*(b + a) = c;
			a++;
		}
		return (b);
	}
	else
	{
		return (NULL);
	}
}

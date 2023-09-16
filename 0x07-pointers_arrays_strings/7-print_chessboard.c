/* this program prints an an array of array i.e : two dimension array*/
#include <stdio.h>
#include "main.h"

/**
 * print_chessboard-prints the chess in the screen
 * @a:pointer to an array of arrays that contain elts of chess
 * Return:nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;

	if (a == NULL)
	{
		return;
	}
	b = 0;
	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}
		_putchar('\n');
		b++;
	}
}

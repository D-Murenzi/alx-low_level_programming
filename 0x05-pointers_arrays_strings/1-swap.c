/* this function swaps values of two intergers */
#include "main.h"
/**
 * swap_int-swaps the values of two ints
 * @inta: is an interger stored at certain adress
 * @intb: is an integer to be swapt too
 * Return: avoid for success
 */

void swap_int(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}

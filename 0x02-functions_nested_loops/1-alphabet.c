/*this program prints lower case alphabets */
#include "main.h"
/**
 * main-call other functions
 * print_alphabet-prints lower case letters
 * Return: success id 0
 */

void print_alphabet(void)
{
	int a '97';

	while((a>=97)&&(a<=122))
	{
		_putchar(a);
		a++;
	}

int main(void)
{
	print_alphabet();
	_putchar('\n');

	return (0);
}

/*this program prints lower case alphabets */
#include "main.h"

/**
 * print_alphabet-prints lower case letters
 * Return-void
 */
void print_alphabet(void)/*prints lowercase letters*/
{
	int a = 'a';

	while ((a >= 97) && (a <= 122))
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

int main(void);

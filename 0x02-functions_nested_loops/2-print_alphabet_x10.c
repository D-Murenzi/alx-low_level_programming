/* this program prints the alpha bets 10times*/
#include "main.h"
/**
 * print_alphabet_x10-prints charcters 10 times
 * Return: zero on completion
 */
void print_alphabet_x10(void);
{
	int a;

	for ((a = 1; ((a > = 1) && (a = < 10)); a++)
		{
			int n = 'a';

			while ((n > = 97) && (n = < 122))
			{
				_putchar(n);
				n++;
			}
			_putchar('\n');
		}
}
int main(void);

/* the program to write something without printf and puts functions */
#include<unistd.h>
/**
 * main-an entry function
 * write-use to print to thestandard error
 * Return: 1 when the progrma run well
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar,"
"2015-10-19\n", 59);

	return (1);
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-entry point of the code
 * printf-write to the console
 * while-checks for the conditions
 * Return: 0 when the code is successfully run
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int the_digit;

	the_digit = n % 10;

	if (the_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, the_digit);
	if (the_digit == 0)
		printf("Last digit of %d is %d and is 0\n",
		       n, the_digit);
	if ((the_digit < 6) && (the_digit != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, the_digit);
	return (0);
}

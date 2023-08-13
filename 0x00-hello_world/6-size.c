/*this program writes the sizeof various types on computer its compiled on */
#include<stdio.h>
/**
 * main-call the other functions from the lib
 * printf-allows to print on the default output
 * Return: 0 when the code is run successfully
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned
						 long int)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long int)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned
					     long int)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",
	       (unsigned long int)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned
						  long int)sizeof(float));

	return (0);
}

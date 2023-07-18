#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* print the size of various data types */

	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a char: %lu \n", sizeof(char));
	printf("Size of a long long int: %lu\n",
	       sizeof(long long int));
	printf("Size of a float: %lu \n", sizeof(float));
	printf("Size of a long int: %lu\n", sizeof(long int));
	return (0);
}

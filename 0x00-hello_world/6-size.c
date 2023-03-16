#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the size of various types
 *
 * Return: Always 0
*/

int main(void)
{
	/* printing size of datatypes */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: 4 byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: 4 byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: 4 byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}

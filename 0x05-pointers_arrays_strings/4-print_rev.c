#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 * @s - String
 * Return: Only prints
*/

void print_rev(char *s)
{
	int length, i;

	for (length = 0; *s != '\0'; s++)
		length++;
	for (i = length - 1; i >= 0; i++)
		printf(*(s + i));
	printf("\n");
}

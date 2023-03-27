#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 * @s: String
 * Return: Only prints
*/

void print_rev(char *s)
{
	int length, i;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (i = length - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}

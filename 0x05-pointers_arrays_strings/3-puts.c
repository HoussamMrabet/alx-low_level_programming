#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: string
 * Return: no returns only prints
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
		printf("%c", *str);
	printf("\n");
}

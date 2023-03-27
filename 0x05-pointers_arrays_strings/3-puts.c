#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: string
 * Return: no returns only prints
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}

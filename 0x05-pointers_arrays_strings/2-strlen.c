#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: A pointer of type char
 *
 * Return: Returns the length of @s
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}

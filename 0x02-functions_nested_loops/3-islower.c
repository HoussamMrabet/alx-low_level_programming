#include "main.h"

/**
 * _islower - Entry
 * Description: a function that checks for lowercase character
 * @c: Ascii code of a char
 * Return: Returns 1 if c is lowercase otherwise returns 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

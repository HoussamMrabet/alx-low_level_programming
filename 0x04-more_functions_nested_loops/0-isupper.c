#include "main.h"

/**
 * _isupper - a function that checks for uppercase characte
 * @c: ascii code for a char
 * Return: Returns 1 if c is uppercase otherwise returns 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

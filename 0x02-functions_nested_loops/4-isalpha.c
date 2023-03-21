#include "main.h"

/**
 * _isalpha - Entry
 * Description: a function that checks for alphabetic character
 * @c: Ascii code
 * Return: Returns 1 if c is a letter otherwise returns 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}

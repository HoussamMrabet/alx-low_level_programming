#include "main.h"

/**
 * rev_string - A function that that reverses a string
 * @s: String
 * Return: void function
*/

void rev_string(char *s)
{
	int l, i;
	char index;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = 0; i < l / 2; i++)
	{
		index = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = index;
	}
}

#include "main.h"

/**
 * print_alphabet - Entry
 * Description: a function that prints the alphabet, in lowercase
 * Return: void function with no return
*/

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(str[i]);

	_putchar('\n');
}

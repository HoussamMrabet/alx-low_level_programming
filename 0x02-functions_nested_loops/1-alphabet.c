#include "main.h"

/**
 * print_alphabet - Entry
 * Description: a function that prints the alphabet, in lowercase
 * Return: void function with no return
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar("\n");
}

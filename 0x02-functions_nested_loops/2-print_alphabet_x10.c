#include "main.h"

/**
 * print_alphabet_x10 - Entry
 * Description: A function that prints 10 times the alphabet, in lowercase
 * Return: no return (void function)
*/

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 10; i++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar("\n");
}

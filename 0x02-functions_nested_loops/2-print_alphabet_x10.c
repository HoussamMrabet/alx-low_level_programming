#include "main.h"

/**
 * print_alphabet_x10 - Entry
 * Description: A function that prints 10 times the alphabet, in lowercase
 * Return: no return (void function)
*/

void print_alphabet_x10(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(alph[j]);
		_putchar('\n');
	}
}

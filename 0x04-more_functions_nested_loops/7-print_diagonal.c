#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void function
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

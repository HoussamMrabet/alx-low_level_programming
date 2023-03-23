#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times the \ character
 * Return: should be printed
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= i; ++j)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

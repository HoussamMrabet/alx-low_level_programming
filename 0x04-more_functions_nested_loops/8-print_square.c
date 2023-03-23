#include "main.h"

/**
 * print_square - print a square
 * @size: is the size of the square
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	else
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			_putchar('\n');
		}
}

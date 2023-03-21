#include "main.h"

/**
 * print_times_table - Entry
 * Description: a function that prints the n times table, starting with 0
 * @n: An integer
 * Return: void function
*/

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar('0');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				if (k > 9)
				{
					if (k > 99)
					{
						_putchar('0' + (k / 100));
					}
					else
					{
						_putchar(' ');
					}
					_putchar('0' + ((k / 10) % 10));
					_putchar('0' + (k % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
			}
			_putchar('\n');
		}
}

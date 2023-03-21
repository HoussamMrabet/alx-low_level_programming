#include "main.h"

/**
 * print_last_digit - Entry
 * Description: A function that prints the last digit of a number
 * @x: an integer
 * Return: returns the last digit of @x
*/

int print_last_digit(int x)
{
	int n, dl;

	n = x % 10;
	dl = n < 0 ? -n : n;
	_putchar('0' + dl);

	return (dl);
}

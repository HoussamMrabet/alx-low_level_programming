#include "main.h"

/**
 * print_last_digit - Entry
 * Description: A function that prints the last digit of a number
 * @x: an integer
 * Return: returns the last digit of @x
*/

int print_last_digit(int x)
{
	_putchar('0' + (x % 10));

	return (x % 10);
}

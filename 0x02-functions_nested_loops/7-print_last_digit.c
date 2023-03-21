#include "main.h"

/**
 * print_last_digit - Entry
 * Description: A function that prints the last digit of a number
 * @x: an integer
 * Return: returns the last digit of @x
 */

int print_last_digit(int x)
{
    int ld;

    ld = x % 10;
    _putchar(ld);

    return (ld);
}
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b && a > c)? a : (b > a && b > c)? b : (c > a && c > b)? c : 0;

	return (largest);
}
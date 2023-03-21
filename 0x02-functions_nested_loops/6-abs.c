#include "main.h"

/**
 * _abs - Entry
 * Description: a function that computes the absolute value of an integer
 * @x: an integer
 * Return: returns absolute value of @x
*/

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

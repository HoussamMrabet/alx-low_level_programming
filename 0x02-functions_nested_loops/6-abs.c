#include "main.h"

/**
 * _abs - Entry
 * Description: a function that computes the absolute value of an integer
 * @x: an integer
 * Returns: absolute valur of @x
*/

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
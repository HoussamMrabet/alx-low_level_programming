#include "main.h"

/**
 * positive_or_negative - Entry
 * Description: print i status; zero, positive or negative
 * Return: void function
*/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if(i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}

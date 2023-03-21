#include "main.h"

/**
 * jack_bauer - Entry
 * Description: A function that prints every minute of the day of Jack Bauer
 * Return: void
*/

void jack_bauer(void)
{
	int i, j, k;
	char min[2], hr[2], day[5];

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{
			min = j < 10 ? '0' + j : j;
			hr = i < 10 ? '0' + i : i;
			day = i + ":" + j;

			for (k = 0; k <= 5; k++)
				_putchar(day[k]);
			_putchar('\n');
		}	
}

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry
 * Description: A function that prints all natural numbers from n to 98
 * @n: An integer
 * Return: void
*/

void print_to_98(int n)
{
	int i;

	printf("%d", n);
	if (n <= 98)
	{
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	printf("\n");
}

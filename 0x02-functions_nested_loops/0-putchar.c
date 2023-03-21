#include "main.h"

/**
 * main - Entry
 * Description:  A program that prints _putchar
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

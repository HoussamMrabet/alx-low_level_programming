#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints without printf or puts
 *
 * Return: Return an error 1
*/

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}

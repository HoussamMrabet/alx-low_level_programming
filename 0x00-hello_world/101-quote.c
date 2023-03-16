#include <unistd.h>

/**
 * main - Entry point
 *
 * Description : A C program that prints without printf or puts
 *
 * Return : Always 1
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}

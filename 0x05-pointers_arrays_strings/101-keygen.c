#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that generates random valid
*        passwords for the program 101-crackme
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char password[100];

	srand(time(NULL));
	for (i = 0; i < 99; i++) {
		password[i] = rand() % 94 + 33;
	}

	password[99] = '\0';

	printf("%s\n", password);

	return 0;
}

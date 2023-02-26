#include "main.h"

/**
 * main - main function is found here
 *
 * Return: always 0
 *
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);

}

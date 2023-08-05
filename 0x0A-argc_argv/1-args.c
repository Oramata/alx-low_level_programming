#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

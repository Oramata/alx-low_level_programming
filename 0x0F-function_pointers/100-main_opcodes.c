#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: 0 on success, 1 for incorrect arguments, or 2 for negative bytes.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *main_ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02x ", main_ptr[i]);
	}
	printf("%02x\n", main_ptr[i]);

	return (0);
}

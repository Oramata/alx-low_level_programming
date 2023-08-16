#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the calculator program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: 0 on success, 98 for wrong arguments, 99 for invalid operator,
 * or 100 for division by zero.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	op_func op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((op == div_op || op == mod) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op(num1, num2);
	printf("%d\n", result);

	return (0);
}

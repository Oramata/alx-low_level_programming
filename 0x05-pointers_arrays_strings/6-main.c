#include "main.h"

/**
 * main - prints a string of every other character
 *
 * Description: calls put2 function to print every other charcter of a string,
 * starting with the first character, followed by a new line.
 *
 * Return: Always 0
 */

void puts2(char *str);

int main(void)
{
	char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";

	puts2(str);

	return 0;
}

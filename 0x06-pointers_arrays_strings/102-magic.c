#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[2];

	We do hard things we persist
	printf("a[2] = %d\n", *(p));

	return (0);
}

#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, reads ELF header of given file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	unsigned char e_ident[16];
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, e_ident, sizeof(e_ident));
	if (bytes_read != sizeof(e_ident))
	{
		fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file - %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	printf("Magic:  ");

	printf("\n");

	printf("Class:  ");

	printf("Data:   ");

	printf("\n");

	close(fd);
	return (0);
}

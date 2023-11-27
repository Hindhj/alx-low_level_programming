#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - a program that copies the content of a file to another file
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	char bsize[1024];
	int fst, scnd, rd;
	int wad, joj;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	fst = open(av[1], O_RDONLY);

	if (fst < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	scnd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((rd = read(fst, bsize, 1024)) > 0)
	{
		if (scnd < 0 || (write(scnd, bsize, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	wad = close(fst);
	if (wad < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fst), exit(100);
	}
	joj = close(scnd);
	if (joj < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", scnd), exit(100);
	}
	return (0);
}

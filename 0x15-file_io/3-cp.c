#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - copying the content of a file to another one
 * @ac: arg count
 * @av: argum vec
 * Return: 0
 */
int main(int ac, char **av)
{
	char bsize[1024];
	int fi, se, thi;
	int un, deu;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fi = open(av[1], O_RDONLY);
	if (fi < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	se = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((thi = read(fi, bsize, 1024)) > 0)
	{
		if (se < 0 || (write(se, bsize, thi) != thi))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (thi < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	un = close(fi);
	if (un < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fi), exit(100);
	}
	deu = close(se);
	if (deu < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", se), exit(100);
	}
	return (0);
}

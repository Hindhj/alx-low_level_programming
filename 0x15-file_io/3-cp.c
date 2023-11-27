#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: can't read from file %s\n"
#define ERR_NOWRITE "Error: can't write to %s\n"
#define ERR_NOCLOSE "Error: can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - a program that copies the content of a file to another file
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 1 on success otherwise 0
 */

int main(int ac, char **av)
{
	ssize_t us;
	char bsize[READ_BUF_SIZE];
	int fst = 0, scnd = 0;

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	fst = open(av[1], O_RDONLY);

	if (fst == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	scnd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (scnd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while
		((us = read(fst, bsize, READ_BUF_SIZE)) > 0)

			if (write(scnd, bsize, us) != us)
				dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (us == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	fst = close(fst);
	scnd = close(scnd);
	if (fst)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fst), exit(100);

	if (scnd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fst), exit(100);

	return (EXIT_SUCCESS);
}

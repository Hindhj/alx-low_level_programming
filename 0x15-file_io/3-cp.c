#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"

/**
 * main - a function that checks the code
 * @argc: number of arguments
 * @argv: vect arg
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int f;
	int t;
	int mena;
	int wt;
	int rd;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (t == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);

	f = open(argv[1], O_RDONLY);

	if (f == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);

	while (1)
	{
		rd = read(f, buffer, 1024);

		if (rd == -1)
			dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);

		if (rd > 0)
		{
			wt = write(t, buffer, rd);

			if (wt == -1)
				dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
		}
		else
			break;
	}
	mena = close(f);

	if (mena == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f), exit(100);

	mena = close(t);

	if (mena == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t), exit(100);

	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters
 *
 * Return: 0 if the file can't be opened or read
 * or if filename is NULL
 * or if write fails or doesn't write the expected amount of bytes
 * otherwise return the actuak number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_rd, num_wt;
	char *mena;
	ssize_t hj;

	hj = open(filename, O_RDONLY);

	if (hj == -1)
		return (0);

	mena = malloc(sizeof(char) * letters);

	num_wt = read(hj, mena, letters);

	num_rd = write(STDOUT_FILENO, mena, num_wt);

	free(mena);
	close(hj);

	return (num_rd);
}

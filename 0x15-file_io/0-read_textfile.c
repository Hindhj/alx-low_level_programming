#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file
 *  and prints it to the POSIX standard output
 *  @filename: name of the file
 *  @letters: the number of letters it should read and print
 *
 *  Return: the actual number of letters it could read and print if the file
 *  cant't be opened or read , or te filename is NULL return 0
 *  if write fails or does not write the expected amount of bytes,return 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bfr;
	ssize_t rd, wrt;
	int opn;

bfr = malloc(sizeof(char) * letters);

	if (bfr == NULL)
		return (0);

	{
	if (!(filename))
		return (0);
	}
		opn = open(filename, O_RDONLY);
		rd = read(opn, bfr, letters);
		wrt = write(STDOUT_FILENO, bfr, rd);

	if (opn == -1)
	{
		close(opn);
		return (0);
	}
	if (rd == -1)
	{
		close(opn);
		free(bfr);
		return (0);
	}

	if (wrt == -1)
	{
		close(opn);
		free(bfr);
		return (0);
	}

		close(opn);

	return (wrt);

}

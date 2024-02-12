#include "main.h"
#include<unistd.h>
#include<stdlib.h>

/**
 * read_textfile - it's a function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tbh;
	ssize_t re, wr;
	int ope;

	tbh = malloc(sizeof(char) * letters);
	if (tbh == NULL)
		return (0);
	{
		if (!(filename))
			return (0);
	}
	ope = open(filename, O_RDONLY);
	re = read(ope, tbh, letters);
	wr = write(STDOUT_FILENO, tbh, re);

	if (ope == -1)
	{
		close(ope);
		return (0);
	}
	if (re == -1)
	{
		close(ope);
		free(tbh);
		return (0);
	}
	if (wr == -1)
	{
		close(ope);
		free(tbh);
		return (0);
	}
	close(ope);
	return (wr);
}

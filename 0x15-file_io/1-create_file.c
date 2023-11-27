#include "main.h"

/**
 * create_file - a function that creats a file
 * @filename: name of te file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure or if filename is NULL.
 * if text_content is NULL create and empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fln, xt;
	int wrt = 0;

	if (!(filename))
		return (-1);

	fln = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fln == -1)
		return (-1);

	if (text_content)
	{
		while
			(text_content[wrt])
				wrt++;
	}

	xt = write(fln, text_content, wrt);

	if (xt == -1)
		return (-1);

	close(fln);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - a function tat appends text at the end of a file
 * @filename: name of te file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure or if filename is NULL
 * 1 if the file exists -1 if the file doesn't or if you don't have permission
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fln, xt;
	int wrt = 0;

	if (!(filename))
		return (-1);

	fln = open(filename, O_WRONLY, O_APPEND);

	if (fln == -1)
		return (-1);

	if (text_content)
	{
	while
			(text_content[wrt])
				wrt++;

	xt = write(fln, text_content, wrt);

	if (xt == -1)
		return (-1);
	}

	close(fln);

	return (1);
}

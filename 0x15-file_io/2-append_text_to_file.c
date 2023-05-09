#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * @filename: name of the file
 * @text_content: the NULL terminated string
 *
 * Return: 1 on success otherwise, -1 if it failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int hj;
	int n_ls;
	int rdwt;

	if (!filename)
		return (-1);

	hj = open(filename, O_WRONLY | O_APPEND);

	if (hj == -1)
		return (-1);

	if (text_content)
	{
		for (n_ls = 0; text_content[n_ls]; n_ls++)
			;

	rdwt = write(hj, text_content, n_ls);

	if (rdwt == -1)
		return (-1);
	}
	close(hj);

	return (1);
}

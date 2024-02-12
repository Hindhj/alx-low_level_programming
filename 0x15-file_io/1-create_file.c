#include "main.h"

/**
 * create_file - it's a function that creats a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, or else -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fyi, dt;
	int wr = 0;

	if (!(filename))
		return (-1);

	fyi = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fyi == -1)
		return (-1);
	if (text_content)
	{
		while
			(text_content[wr])
				wr++;
	}
	dt = write(fyi, text_content, wr);
	if (dt == -1)
		return (-1);
	close(fyi);
	return (1);
}

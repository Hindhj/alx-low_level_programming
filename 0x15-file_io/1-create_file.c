#include "main.h"

/**
 * create_file - a function that creats a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success otherwise, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int hj;
	int num_lr;
	int num_rd;

	if (!filename)
		return (-1);

	hj = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (hj == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_lr = 0; text_content[num_lr]; num_lr++)
		;

	num_rd = write(hj, text_content, num_lr);

	if (num_rd == -1)
		return (-1);

	close(hj);

	return (1);
}

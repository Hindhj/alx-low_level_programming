#include "main.h"

/**
 * _strlen - returning the length of said string
 * @s: string
 *
 * Return: int length of string
 */

int _strlen(char *s)
{
	int h = 0;

	if (!s)
		return (0);
	while (*s++)
		h++;
	return (h);
}

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
	int fln;
	ssize_t wrt = 0;
	ssize_t on = _strlen(text_content);

	if (!filename)
		return (-1);

	fln = open(filename, O_WRONLY | O_APPEND);

	if (fln == -1)
		return (-1);

	if (on)

		wrt = write(fln, text_content, on);

	close(fln);

	return (wrt == on ? 1 : -1);
}

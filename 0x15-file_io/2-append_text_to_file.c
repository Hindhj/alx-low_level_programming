#include "main.h"
/**
 * _strlen - it returns the length of string
 * @s: string
 * Return: int length of sais string
 */
int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}
/**
 * append_text_to_file - it's a function that appends at the end of file
 * @filename: name of file
 * @text_content: NULL terminated string added at the end of file
 * Return:1 on success and -1 on failure or if the file name is NULL
 * -1 if file doesn't exist or if you don't have permission
 *  1 if file exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fyi;
	ssize_t wr = 0;
	ssize_t op = _strlen(text_content);

	if (!filename)
		return (-1);
	fyi = open(filename, O_WRONLY | O_APPEND);
	if (fyi == -1)
		return (-1);
	if (op)
		wr = write(fyi, text_content, op);
	close(fyi);
	return (wr == op ? 1 : -1);
}

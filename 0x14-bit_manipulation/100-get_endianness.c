#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 *
 * Return: 0 if big endian otherwise 1
 */

int get_endianness(void)
{
	int l;
	char *r;

	l = 1;
	r = (char *)&l;

	return (*r);
}

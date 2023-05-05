#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 *
 * Return: 0 if big otherwise, 1 if little
 */

int get_endianness(void)
{
	unsigned int hdj;
	char *mena;

	hdj = 1;

	mena = (char *) &hdj;

	return ((int)*mena);
}

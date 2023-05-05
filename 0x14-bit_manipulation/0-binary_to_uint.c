#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: 0 if there is one or more chars in the string b that is not 0 or 1,
 * or b is NULL, otherwise, the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int hdj;
	unsigned int mena;

	mena = 0;

	if (!b)
		return (0);

	for (hdj = 0; b[hdj]; hdj++)
	{
		if (b[hdj] < '0' || b[hdj] > '1')
			return (0);

		mena = 2 * mena + (b[hdj] - '0');
	}
	return (mena);
}

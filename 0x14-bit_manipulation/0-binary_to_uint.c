#include "main.h"

/**
 * binary_to_uint - it's a function that converts a binary number
 * to an unsigned int
 * @b: it's a string that has binary numbers
 *
 * Return: the converted number or else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int all = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			all = 2 * all + (*b - '0');
			b++;
		}
		else
			return (0);
	}
	return (all);
}

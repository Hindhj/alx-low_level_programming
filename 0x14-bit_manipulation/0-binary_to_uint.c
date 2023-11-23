#include "main.h"


/**
 * binary_to_uint - a function that converts a binary number to anunsigned int
 * @b: a string that has binary numbers
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int total = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			total = 2 * total + (*b - '0');
			b++;
	}
	else
		return (0);
	}
	return (total);
}

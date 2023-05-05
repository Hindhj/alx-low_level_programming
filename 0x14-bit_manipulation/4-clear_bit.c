#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: index starting from 0 of te bit
 *
 * Return: 1 if it worked, otherwise -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int hdj;

	{
	if (index > 63)
		return (-1);
	}

	hdj = 1 << index;

	if (*n & hdj)

		*n ^= hdj;

	return (1);
}

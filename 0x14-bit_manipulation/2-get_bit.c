#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index starting from 0
 *
 * Return: the value of the bit at index
 * otherwise, -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int hdj;

	hdj = 0;

	if (n == 0 && index < 64)
		return (0);

	for (hdj = 0; hdj <= 63; n >>= 1, hdj++)
	{
		if (index == hdj)
			return (n & 1);
	}

	return (-1);
}

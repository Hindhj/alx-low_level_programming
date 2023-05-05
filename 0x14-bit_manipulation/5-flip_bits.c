#include "main.h"

/**
 * flip_bits - a function that returns the number of bits needed
 * to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned lon int
 *
 * Return: bits input
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mena;

	for (mena = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			mena++;
	}

	return (mena);
}

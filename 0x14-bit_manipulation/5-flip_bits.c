#include "main.h"

/**
 * flip_bits - it's a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: other number
 *
 * return: number of bites
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int PI;
	unsigned long int QU = 0;

	PI = n ^ m;

	while (PI > 0)
	{
		QU += (PI & 1);
		PI >>= 1;
	}
	return (QU);
}

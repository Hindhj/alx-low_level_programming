#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: a number
 * @m: another number
 *
 * Return: number of bites
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int T;
	unsigned long int Q = 0;

	T = n ^ m;

		while (T > 0)
		{
		Q += (T & 1);
		T >>= 1;
		}
	return (Q);
}

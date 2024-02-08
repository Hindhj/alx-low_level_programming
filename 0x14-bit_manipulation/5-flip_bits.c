#include "main.h"

/**
 * flip_bits - it's a function that returns the number of bits you would need
 * @n: number
 * @m: other number
 *
 * Return: number of bites
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int P;
	unsigned long int Q = 0;

	P = n ^ m;

	while (P > 0)
	{
		Q += (P & 1);
		P >>= 1;
	}
	return (Q);
}

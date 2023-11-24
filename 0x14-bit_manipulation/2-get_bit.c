#include "main.h"

/**
 * get_bit - a function tat returns the vaalue of a bit at a given index
 * @n: number
 * @index: index
 *
 *
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int v;
	unsigned long int w;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	v = 1 << index;
	w = n & v;

	if (w == v)
		return (1);

	return (0);
}

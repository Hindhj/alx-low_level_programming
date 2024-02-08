#include "main.h"

/**
 * get_bit - it's a function that returns te value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index or else 1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int vi;
	unsigned long int xu;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	vi = 1 << index;
	xu = n & vi;

	if (xu == vi)
		return (1);
	return (0);
}

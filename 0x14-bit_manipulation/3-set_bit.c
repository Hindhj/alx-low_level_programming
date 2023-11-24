#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 otherwise if error -1
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	b = 1 << index;
	*n = *n | b;

	return (1);
}

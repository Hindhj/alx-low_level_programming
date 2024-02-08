#include "main.h"

/**
 * set_bit - it's a function that sets the value of a bit to 1 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 or else -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ah;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	ah = 1 << index;
	*n = *n | ah;
	return (1);
}

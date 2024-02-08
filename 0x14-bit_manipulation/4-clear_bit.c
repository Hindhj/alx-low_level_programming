#include "main.h"

/**
 * clear_bit - it's a function that sets the value of a bit to 0 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 or else -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

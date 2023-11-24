#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 otherwise if error -1
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

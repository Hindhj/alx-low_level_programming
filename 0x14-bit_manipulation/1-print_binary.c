#include "main.h"
#include <stdio.h>

/**
 * print_binary - it's a function that prints the binary
 * representation of a number
 * @n: the given number
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

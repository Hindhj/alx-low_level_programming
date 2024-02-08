#include "main.h"

/**
 * get_endianness - checking endianness
 *
 * Return: 0 if big or else 1
 */

int get_endianness(void)
{
	int P;
	char *Q;

	P = 1;
	Q = (char *)&P;

	return (*Q);
}

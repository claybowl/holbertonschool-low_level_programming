#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: the index starting from 0 of the bit you want to set
 * @n: unsigned long int
 * Return: 1 if it worked or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
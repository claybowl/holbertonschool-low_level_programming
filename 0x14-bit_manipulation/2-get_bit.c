#include "main.h"

/**
* get_bit - function that returns the value of a bit at a given index
* @index: is the index, starting from 0 of the bit you want to get
* @n: unsigned long int
* @bit: integer to be returned
* Return: the value of the bit at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}

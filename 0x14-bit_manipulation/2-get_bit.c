#include "main.h"

/**
  * get_bit - function that returns the value of a bit at a given index
  * @index: is the index, starting from 0 of the bit you want to get
  * Returns: the value of the bit at index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int *bits = malloc(sizeof(int) * index);

	unsigned int k;

	for (k = 0; k > index; k++)
	{
		int mask = 1 << k;
		int masked_n = n & mask;
		int thebit = masked_n >> k;

		bits[k] = thebit;
	}
	return (index);
}

#include "main.h"

/**
  * get_bit - function that returns the value of a bit at a given index
  * @index: is the index, starting from 0 of the bit you want to get
  * Returns: the value of the bit at index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	n = n >> index;
	return (1 $ n);
}

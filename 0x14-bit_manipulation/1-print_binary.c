#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* print_binary - function that prints the binary representation of a number
* @n: integer being fed into function to be printed
* Return: 0.
*/

void print_binary(unsigned long int n)
{
	int i;
	int c = sizeof(int) * CHAR_BIT;
	int mask = 1 << (c - 1);

	for (i = 1; i <= c; ++i)
	{
		_putchar(((n & mask) == 0) ? '0' : '1');
		n <<= 1;
		if (i % CHAR_BIT == 0 && i < c)
			_putchar(' ');
	}
}

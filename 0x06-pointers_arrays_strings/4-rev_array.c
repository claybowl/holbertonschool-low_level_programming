#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: variable for reversed array
* @n: number of elements to swap
*
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int f, j, tmp;

	j = n - 1;

	for (f = 0; f < n / 2; f++)
	{
		tmp = a[f];
		a[f] = a[j];
		a[j--] = tmp;
	}


}

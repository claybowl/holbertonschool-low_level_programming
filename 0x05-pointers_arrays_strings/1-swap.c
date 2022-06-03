#include "main.h"

/**
* swap_int  -  swaps the value of two integers
* @a: integer a
* @b: integer b
* Return: return 0 for success
*/
void swap_int(int *a, int *b)
{
	int af1;

	af1 = *a;
	*a = *b;
	*b = af1;
}

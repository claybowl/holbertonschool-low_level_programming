#include "holberton.h"

/**
* _abs - computes the absolute value of an integer
* @n: the int to check
* Return: always 0
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}

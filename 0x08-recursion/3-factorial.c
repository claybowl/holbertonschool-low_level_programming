#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: a given number aka an integer
 * Return: is the factorial of n or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (0);
	}
	else if (n == 1)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}

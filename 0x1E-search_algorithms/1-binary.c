#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}

/**
 * binary_search - Uses binary search to find value in a sorted array of ints
 *
 * @array: Pointer to array to seach
 * @size: Size of array
 * @value: Value for which to search
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, right = size;
	size_t left = 0;

	while (array && right > 0)
	{
		printf("Searching in array: ");
		print_array(&array[left], right);
		i = (right - 1) / 2 + left;

		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			left = i + 1;
			right /= 2;
		}
		else if (array[i] > value)
		{
			right = (left - 1) / 2;
		}
	}
	return (-1);
}

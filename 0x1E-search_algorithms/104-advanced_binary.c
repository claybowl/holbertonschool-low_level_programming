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
 * binary_recursion - Uses binary search to find value
 *
 * @array: Pointer to array to search
 * @left: Left index of array
 * @right: Right index of array
 * @value: Value for which to search
 *
 * Return: mid_point where value is located
 */
int binary_recursion(int *array, int left, int right, int value)
{
	size_t mid_point = left + (right - left) / 2;

	if (array && right >= left)
	{
		printf("Searching in array: ");
		print_array(&array[left], right - left + 1);
		if (array[mid_point] < value)
		{
			return (binary_recursion(array, mid_point + 1, right, value));
		}
		if (array[mid_point] > value || array[mid_point - 1] == value)
		{
			return (binary_recursion(array, left, mid_point, value));
		}
		return (mid_point);
	}
	return (-1);
}

/**
 * advanced_binary - Uses binary search to find value in a sorted array of ints
 *
 * @array: Pointer to array to search
 * @size: Size of array
 * @value: Value for which to search
 *
 * Return: index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (binary_recursion(array, 0, size - 1, value));
}

#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - sequential search algorithm
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 * Description: searches for a value in an array of integers
 */

int linear_search(int *array, size_t size, int value)
{
	/* indicates if value is not present in array */
	if (array == NULL)
	{
		return (-1);
	}

	/* compares each element in array to sought value */
	for (int i = 0; i < size; i++)
	{
		/* if match is found, return index of matching element */
		printf("Comparing value %d to %d\n", array[i], value);
		if (array[i] == value)
		{
			return (i);
		}
	}
	/* if no match is found, return -1 */
	return (-1);
}

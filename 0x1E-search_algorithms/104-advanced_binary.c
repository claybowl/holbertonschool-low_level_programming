#include <stdio.h>

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * 
 * Return: index where value is located
*/
int advanced_binary(int *array, size_t size, int value)
{
	int middle;
	int result;
	if (array == NULL || size == 0)
	{
		return -1;
	}
	middle = size / 2;
	if (array[middle] == value)
	{
		return middle;
	}
	else if (array[middle] > value)
	{
		int i = 0;
		/* search in left subarray */
		printf("Searching in left subarray: ");
		while (i < middle)
		{
			printf("%d", array[i]);
			if (i < middle - 1)
				printf(", ");
			i++;
		}
		printf("\n");
		result = advanced_binary(array, middle, value);
		if (result == -1)
		{
			return -1;
		}
		else
		{
			return result;
		}
	}
	else
	{
		size_t i = middle + 1;
		int result;
		/* search in right subarray */
		printf("Searching in right subarray: ");
		while (i < size)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
			i++;
		}
		printf("\n");
		result = advanced_binary(array + middle + 1, size - middle - 1, value);
		if (result == -1)
		{
			return -1;
		}
		else
		{
			return middle + 1 + result;
		}
	}
}

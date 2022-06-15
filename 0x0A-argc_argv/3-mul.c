#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int mult_num = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	mult_num = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult_num);
	return (0);
	}
}

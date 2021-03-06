#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - an array of chars & initializes it w/ a specific char
* @size: size of array to be created as an integer
* @c: character that initializes the array
* Return: a pointer to an array or NULL if it fails or size = 0
*/

char *create_array(unsigned int size, char c)
{
char *j;
unsigned int e = 0;

j = malloc((size) * sizeof(char));
if (j == NULL)
{
return (NULL);
}
while (e < size)
{
j[e] = c;
e++;
}
if (size == 0)
{
return (NULL);
}
return (j);
}

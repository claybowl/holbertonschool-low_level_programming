#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @head: pointer to list_t list (points to first element of the list)
* Return: the number of nodes
*/


size_t print_list(const list_t *head)
{
	size_t count = 0;
	const list_t *current = head;
	char *string;
	unsigned int length;

	while (current != NULL)
	{
		count++;
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			current = current->next;
		}
		string = current->str;
		length = current->len;
		printf("[%u] %s\n", length, string);
		current = current->next;
	}
	return (count);
}

#include "lists.h"

/*
* list_len - returns number of elements in linked list list_t
* @head: points to the linked list list_t
* Return: the number of elements in linked list
*/

size_t list_len(const list_t *head)
{
	size_t count = 0;
	const list_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

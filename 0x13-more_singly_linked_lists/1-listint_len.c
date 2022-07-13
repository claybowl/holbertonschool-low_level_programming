#include "lists.h"

/**
* listint_len - returns the number of elements in listint_t
* @head: points to the linked list listint_t
* Return: the number of elements in listint_t
*/

size_t listint_len(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

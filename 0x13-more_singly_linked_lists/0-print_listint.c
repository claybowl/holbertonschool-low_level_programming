#include "lists.h"

/**
* print_listint - function that prints all of the of a list_s list
* @head: pointer to listint_t list, a singly linked list.
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *head)
{

	unsigned int count = 0;
	const listint_t *current = head;
	
	
	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}

#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to the linked list awaiting freedom
 * Return: is void (maybe freedom is void)
 */

void free_listint(listint_t *head)
{
	listint_t *freedom;

	while (head != NULL)
	{
		freedom = head;
		head = head->next;
		free(freedom);
	}
}

#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * which essentially deletes the entire linked list
 * @head: points to the pointer of the listint_t list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *freedom;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	freedom = *head;
	while (freedom != NULL)
	{
		next = freedom->next;
		free(freedom);
		freedom = next;
	}
	*head = NULL;
}

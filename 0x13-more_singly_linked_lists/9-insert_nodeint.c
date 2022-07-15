#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer of listint_t linked list
 * @idx: the index of the list where the new node should be added, stars at 0
 * @new: integer that holds value of new node
 * Return: the address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int new)
{
	listint_t *current = *head;
	listint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = new;
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}

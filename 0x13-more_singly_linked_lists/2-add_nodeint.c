#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer variable head so we can modify the pointer
 * within the function.
 * @newint: the integer node to be added to linked list
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int newint)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = newint;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

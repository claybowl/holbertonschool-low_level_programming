#include "lists.h"

/**
* delete_dnodeint_at_index - function that deletes the
* node at index index of a dlistint_t linked list.
* @head: pointer
* @index: is the index of the node that should be
* deleted.Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
*
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *currentnode, *nextnode, *prevnode;

	if (head == NULL || *head == NULL)
		return (-1);

	currentnode = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
			*head = NULL;
		free(currentnode);
		return (1);
	}
	while (i < index)
	{
		currentnode = currentnode->next;
		if (currentnode == NULL)
			return (-1);
		i++;
	}
	if (currentnode->next == NULL)
	{
		currentnode->prev->next = NULL;
		free(currentnode);
		return (1);
	}
	nextnode = currentnode->next;
	prevnode = currentnode->prev;
	prevnode->next = nextnode;
	nextnode->prev = prevnode;
	free(currentnode);
	return (1);
}

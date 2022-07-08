#include "lists.h"




size_t print_list(const list_t *h)
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

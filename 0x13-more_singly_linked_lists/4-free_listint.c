#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to the struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

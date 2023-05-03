#include "lists.h"

/**
 * get_nodeint_at_index - function with two arguments
 * @head: pointer to first node of linked list
 * @index: nth node
 *
 * Description: returns the n'th node of linked list
 * Return NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}

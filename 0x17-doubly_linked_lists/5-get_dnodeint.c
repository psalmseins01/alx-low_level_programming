#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of Linked list
 * @head: pointer to head
 * @index: index of the nth node
 * Return: return pointer to the head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int temp_i;

	if (!head)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	temp_i = 0;

	while (head != NULL)
	{
		if (temp_i == index)
			break;
		head = head->next;
		temp_i++;
	}
	return (head);
}

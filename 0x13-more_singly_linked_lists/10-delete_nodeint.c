#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: double pointer head
 * @index: index of the node
 * Return: return 1 or 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;
	listint_t *tmp;
	unsigned int j;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);
}

#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: double pointer
 *
 * Return: return 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *stat;

	if (head == NULL || *head == NULL)
		return (0);
	stat = *head;
	*head = stat->next;
	n = stat->n;
	free(stat);
	return (n);
}

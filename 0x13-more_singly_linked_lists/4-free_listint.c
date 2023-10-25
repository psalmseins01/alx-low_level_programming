#include "lists.h"
/**
 * free_listint - Function that frees a list
 * @head: head of list
 * Return: return type void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

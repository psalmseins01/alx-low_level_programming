#include "lists.h"
/**
 * add_nodeint - function that returns element at the beginning
 * @head: head for double pointer
 * @n: node to add
 * Return: return pter
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pter;

	if (head == NULL)
		return (NULL);
	pter = malloc(sizeof(listint_t));
	if (pter == NULL)
		return (NULL);
	pter->n = n;
	pter->next = *head;
	*head = pter;
	return (pter);
}

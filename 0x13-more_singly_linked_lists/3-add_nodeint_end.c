#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the pointer
 * @n: representing node
 * Return: return element address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *nNode;

	if (head == NULL)
		return (NULL);
	nNode = malloc(sizeof(listint_t));
	if (nNode == NULL)
		return (NULL);
	nNode->n = n;
	nNode->next = NULL;
	if (*head == NULL)
	{
		*head = nNode;
		return (nNode);
	}
	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = nNode;
	return (nNode);
}

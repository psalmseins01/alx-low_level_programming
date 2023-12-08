#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of list
 * @head: double pointer to head node
 * @n: value of member elements
 * Return: return pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	new_node->next = temp;

	if (temp != NULL)
		temp->prev = new_node;

	*head = new_node;

	return (new_node);
}

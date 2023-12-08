#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: double pointer to a head
 * @n: value of the element
 * Return: return pointer to new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = temp;

	return (new_node);
}

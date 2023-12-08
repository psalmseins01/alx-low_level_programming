#include "lists.h"
/**
 * dlistint_len - Function that returns elements in a linked
 * @h: pointer to header of the linked list
 * Return: return number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num_elem;

	num_elem = 0;

	if (h == NULL)
		return (num_elem);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num_elem++;
		h = h->next;
	}

	return (num_elem);
}

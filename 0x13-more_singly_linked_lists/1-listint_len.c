#include "lists.h"
/**
 * listint_len - prints the number of elements
 * @h: pointer to head
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
	h = h->next;
	cnt++;
	}
	return (cnt);
}

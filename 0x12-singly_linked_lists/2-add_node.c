#include "lists.h"
/**
 * add_node - add new node at beginning of list_t
 * @str: strings
 * @head: node head
 * Return: return address of new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nNode;
	unsigned int i, cnt = 0;

	nNode = malloc(sizeof(list_t));
	if (nNode == NULL)
		return (NULL);
	nNode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		cnt++;
	nNode->len = cnt;
	nNode->next = *head;
	*head = nNode;

	return (*head);

}

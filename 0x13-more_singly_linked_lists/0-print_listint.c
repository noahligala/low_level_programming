#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the members of
 * a linked list.
 * @h: pointer to the head of the first node.
 * Return: number of nodes in linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		printf("List is empty");
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}

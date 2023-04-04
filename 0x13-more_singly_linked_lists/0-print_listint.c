#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 *
 * @h: head of linklist node
 *
 * Return: numberof nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		node++;
	}

	return (node);
}


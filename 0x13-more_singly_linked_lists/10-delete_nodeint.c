#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 * given position in a linked list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);

}

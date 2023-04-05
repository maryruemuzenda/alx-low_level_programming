#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *mouse;

	/* determine if loop exists by seeing if cat and mouse meets*/
	/* start them at head, move cat one node and mouse two nodes */
	cat = mouse = head;

	while (cat != NULL && mouse != NULL)
	{
		cat = cat->next;
		mouse = mouse->next->next;

		if (cat == mouse)
		{
			/* start cat at head and mouse at address they met */
			/* move cat and mouse one node to find loop origin */
			cat = head;
			while (cat != mouse)
			{
				cat = cat->next;
				mouse = mouse->next;
			}
			return (cat);
		}
	}

	return (NULL);
}


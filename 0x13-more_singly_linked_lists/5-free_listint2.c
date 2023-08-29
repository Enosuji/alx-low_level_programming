#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: A pointer to the head pointer of the list
 * description : 5-free_listint2.c
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

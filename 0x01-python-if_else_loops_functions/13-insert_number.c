#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @list_head: A pointer to the head of the linked list.
 * @new_number: The number to insert.
 * 
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **list_head, int new_number)
{
	listint_t *current_node = *list_head, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = new_number;

	if (current_node == NULL || current_node->n >= new_number)
	{
		new_node->next = current_node;
		*list_head = new_node;
		return (new_node);
	}

	while (current_node && current_node->next && current_node->next->n < new_number)
		current_node = current_node->next;

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - returns address of new node
 * @head: pointer to struct
 * @str: to be duplicated
 *
 * Return: address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current;

	if (!new || !str)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	return (new);
}

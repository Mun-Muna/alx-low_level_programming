#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - returns number of elements of a list
 * @head: pointer to struct
 * @str: to be duplicated
 *
 * Return: address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr || !str)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

#include "monty.h"

/**
  *monty_push - adds a node at the beginnig of a list
  *@head: pointer to pointer to the first node
  *@line_number: position of line being executed
  *
  *Return: return new node or NULL if failed
  */
void monty_push(stack_t **head, unsigned int line_number)
{
	stack_t *new = NULL;
	stack_t *prev = *head;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		malloc_fail();

	new->next = prev;
	new->prev = NULL;

	new->n = atoi(tok[1]);

	if (prev != NULL)
		prev->prev = new;

	*head = new;
	(void)line_number;
}

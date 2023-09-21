#include "monty.h"

/**
  *free_stack - frees the stack
  *@head: start of the list to free
  */
void free_stack(stack_t **head)
{
	stack_t *current = *head;
	stack_t *tmp;

	if (current == NULL)
		return;

	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}

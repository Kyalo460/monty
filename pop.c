#include "monty.h"

/**
  *monty_pop - removes the top element of the stack
  *@stack: linked list
  *@line_number: position of line being executed
  */
void monty_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *del;

	del = current;
	current = current->next;
	free(del);
	if (current)
		current->prev = NULL;
	*stack = current;

	(void)line_number;
}

#include "monty.h"

/**
  *monty_pall - prints number stored in a stack
  *@stack: the linked list
  *@line_number: Number of lines being executed
  */
void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}

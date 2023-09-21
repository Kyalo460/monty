#include "monty.h"

/**
  *monty_pint - prints the value at the top of the stack
  *@stack: linked list
  *@line_number: position of line being executed
  */
void monty_pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

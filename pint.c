#include "monty.h"

/**
  *monty_pint - prints the value at the top of the stack
  *@stack: linked list
  *@line_number: position of line being executed
  */
void monty_pint(stack_t **stack, unsigned int line_number)
{
	printf("%d\n", (*stack)->n);
	(void)line_number;
}

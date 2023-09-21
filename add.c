#include "monty.h"

/**
  *monty_add - adds the two top most stack numbers and deletes the first node
  *@stack: the linked list
  *@line_number: the position of the line being executed
  */
void monty_add(stack_t **stack, unsigned int line_number)
{
	(*stack)->next->next->n += (*stack)->next->n;
	monty_pop(stack, line_number);
}

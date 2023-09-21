#include "monty.h"

/**
  *monty_swap - swaps the top two elements of the stack
  *@stack: linked list
  *@line_number: the position of the line being executed
  */
void monty_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	stack_t *temp = NULL;

	current = *stack;


	temp = current->next->next;

	current->next->next = current;
	current->prev = current->next;
	current->next = temp;
	/*current->next->next = current;*/

	if (temp)
	{
		temp->prev = current;
		/*temp->prev->next = current;*/
	}

	*stack = current->prev;

	(*stack)->prev = NULL;
}

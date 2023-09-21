#include "monty.h"
#include <string.h>


/**
  *execute - executes the instructions line by line
  *@stream: opened file
  */
void execute(FILE *stream)
{
	stack_t *head = NULL;
	unsigned int line_num = 0;
	char *buffer = NULL;
	size_t bytes = 0;
	void (*op_func)(stack_t**, unsigned int);

	while ((getline(&buffer, &bytes, stream) != -1))
	{
		line_num++;
		tok[0] = NULL;
		tok[1] = NULL;

		tok[0] = strtok(buffer, " \n");
		if (tok[0] == NULL)
			continue;
		tok[1] = strtok(NULL, " \n");

		op_func = find_op_func(tok[0]);
		if (op_func == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_num, tok[0]);
			free_every(buffer, &head, stream);
			exit(EXIT_FAILURE);
		}
		if (tok[1] && strcmp(tok[0], "pall") != 0)
		{
			if (atoi(tok[1]) == 0 && strcmp(tok[1], "0") != 0)
			{
				fprintf(stderr, "L%u: usage: push integer\n", line_num);
				free_every(buffer, &head, stream);
				exit(EXIT_FAILURE);
			}
		}

		op_func(&head, line_num);
	}

	free(buffer);
	free_stack(&head);
	buffer = NULL;
}

/**
  *free_every - frees the global op_toks array of strings
  *@buffer: current line
  *@head: doubly linked stack
  *@stream: opened file
  */
void free_every(char *buffer, stack_t **head, FILE *stream)
{
	free_stack(&*head);
	free(buffer);
	fclose(stream);
}
/**
  *find_op_func - looks for the opcode and its function
  *@opcode: instruction name
  *
  *Return: NULL if no opcode is found
  */
void (*find_op_func(char *opcode))(stack_t **, unsigned int)
{
	 instruction_t op_funcs[] = {
		 {"push", monty_push},
		 {"pall", monty_pall},
		 {"pint", monty_pint},
		 {"pop", monty_pop},
		 {"swap", monty_swap},
	 };

	int i;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(opcode, op_funcs[i].opcode) == 0)
			return (op_funcs[i].f);
	}
	return (NULL);
}
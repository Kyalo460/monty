#include "monty.h"

/**
  *arguments - checks if number of arguments are enough
  *@argc: argument count
  *
  */
void arguments(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

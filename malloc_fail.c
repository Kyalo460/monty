#include "monty.h"

/**
  *malloc_fail - displays error message when malloc fails
  */
void malloc_fail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

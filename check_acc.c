#include "monty.h"

/**
  *check_acc - checks if file can be opened
  *@path: directory to file
  */
void check_acc(char *path)
{
	if (access(path, F_OK) != 0)
	{
		fprintf(stderr, "Error: Can't open file %s\n", path);
		exit(EXIT_FAILURE);
	}
}

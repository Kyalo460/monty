#include "monty.h"

/**
  *open_file - opens a file
  *@path: the path to the file
  */
void open_file(char *path)
{
	FILE *stream = NULL;

	stream = fopen(path, "r");

	execute(stream);
	fclose(stream);
}

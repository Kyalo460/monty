#include "monty.h"

/**
  *main - entry point for monty program
  *@argc: nummber of arguments given
  *@argv: pointer to array of strings
  *
  *Return: returns 0 if success
  */
int main(int argc, char *argv[])
{

	arguments(argc);
	check_acc(argv[1]);
	open_file(argv[1]);

	return (0);
}

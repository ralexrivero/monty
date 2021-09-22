#include "monty.h"

int main(int argc, char *argv[])
{
	/* path to the file containing Monty byte code */
	FILE *file;
	/* user does not give any file or more than one argument */
	/* print the error message */
	if (argc != 2)
	{
		perror("USAGE: monty file");
		exit (EXIT_FAILURE);
	}
	printf("argv: %s\12", argv[2]);

	return (0);
}
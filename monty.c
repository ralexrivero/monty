#include "monty.h"

int main(int argc, char *argv[])
{
	/* path to the file containing Monty byte code */
	FILE *fp;

	/* user does not give any file or more than one argument */
	/* print the error message */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\12");
		exit (EXIT_FAILURE);
	}
	printf("argv: %s\12", argv[2]);

	/* asign file to the pointer fp */
	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file <file>,");
		exit (EXIT_FAILURE);
	}
	readfile(fp);
	fclose(fp);
	return (EXIT_SUCCESS);
}
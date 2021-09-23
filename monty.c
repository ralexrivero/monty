#include "monty.h"
/**
 * main - main function
 * @argc: count of arguments
 * @argv: pointer to array containing the arguments
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	/* path to the file containing Monty byte code */
	FILE *fp;

	(void)fp;
	/* user does not give any file or more than one argument */
	/* print the error message */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\12");
		exit(EXIT_FAILURE);
	}

	/* asign file to the pointer fp */
	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\12", argv[1]);
		exit(EXIT_FAILURE);
	}
	readfile(fp);
	fclose(fp);
/* 	freestack(); */
	return (EXIT_SUCCESS);
}

#include "shell.h"
/**
 * topup_args - Fill an array with every input typed by the user
 * @entry: String with the input
 * @arguments: Array to be filled
 * Return: Length of the array
 */

int topup_args(char *entry, char **arguments)
{
	int q = 0;
	char *options, *aux = entry, *command;

	command = strtok(entry, "\n\t\r ");
	arguments[q] = command;
	while (aux != NULL) 
	{
		++q;
		options = strtok(NULL, "\n\t\r ");
		aux = options;
		arguments[q] = options;
	}
	arguments[q] = NULL;
	return (q); 
}

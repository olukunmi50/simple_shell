#include "shell.h"
/**
 * last_freee - Free the memory for the last execution
 * @entry: Input typed by the user
 */
void last_freee(char *entry)
{
	if (isatty(STDIN_FILENO))
	{
		putchar('\n');
		free(entry);
	}
	if (!isatty(STDIN_FILENO))
		free(entry);
}

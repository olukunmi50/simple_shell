#include "shell.h"
/**
 * _getenvv - Get the content of a global variable
 * @global_var: Variable to extract from environment
 * Return: Pointer to the content of a variable.
 */
char *_getenvv(char *global_var)
{
	int i = 0;
	const char cutter[] = "=";
	char *env_tok, *envdup, *env_tok_dup;

	if (global_var != NULL)
	{
		if (environ == NULL)
			return (NULL);
		envdup = _strdup(environ[i]);
		while (envdup != NULL)
		{
			env_tok = strtok(envdup, cutter);
			if (_strcmp(env_tok, global_var) == 0)
			{
				env_tok = strtok(NULL, cutter);
				env_tok_dup = _strdup(env_tok);
				free(envdup);
				return (env_tok_dup);
			}
			i++;
			free(envdup);
			envdup = _strdup(environ[i]);
		}
	}
	return (NULL);
}

#include "shell.h"
/**
 * append_command - Linking an input with paths in global variable PATH
 * @dir_path: directory string to be append with the command
 * @command: command to be linked with the directory
 * Return: Buffer to linked path
 */
char *addon_command(char *dir_path, char *command)
{
	int z, m = 0, len1, len2;
	char *command_path = NULL;

	if (dir_path == NULL || command == NULL)
		return (NULL);

	len1 = _strlen(dir_path);
	len2 = _strlen(command);
	command_path = malloc(len1 + len2 + 2);
	if (command_path == NULL)
		return (NULL);
	for (z = 0; dir_path[z] != '\0'; z++)
	{
		command_path[z] = dir_path[z];
	}
	if (dir_path[z - 1] != '/')
	{
		command_path[z] = '/';
		a++;
	}
	while (command[m] != '\0')
	{
		command_path[z + m] = command[m];
		m++;
	}
	command_path[z + m] = '\0';
	return (command_path);
}


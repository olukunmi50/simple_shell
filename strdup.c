#include "shell.h"
/**
 * _strdup - Duplicates a string
 * @str: String to be duplicated
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	copy = (char *) malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}

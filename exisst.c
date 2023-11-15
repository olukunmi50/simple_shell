#include "shell.h"
/**
 * exisst - Validate if a file exisst
 * @pathname: path to the file
 * Return: 0 if the file exist or -1 if not
 */
int exisst(char *pathname)
{
	int exisst_stat;

	exisst_stat = (open(pathname, O_RDONLY));
	if (exisst_stat != -1)
	{
		close(exisst_stat);
		return (0);
	}
	else
		return (-1);
}

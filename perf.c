#include "shell.h"
/**
 * exec - Creates a new baby process,
 * executes a command and wait for the baby process
 * to update the status
 * @arguments: Array of inputs by the user
 * Return: 0 if success
 */
int perf(char **arguments)
{
	pid_t pid = 0;/**baby process id*/
	int stat = 0, exe_stat = 0;/**shows status of baby process*/

	pid = fork();
	if (pid == -1)
		_printp("failed\n", 7);
	else if (pid == 0)
	{
		exe_stat = execve(arguments[0], arguments, environ);
		if (exe_stat == -1)
		{
			exe_stat = 126;
			perror("hsh");
			exit(exe_stat);
		} /**end of baby process con exit*/
		exit(0);
	}
	else 
		wait(&stat);
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
}

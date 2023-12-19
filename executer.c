#include "main.h"
/**
 *executer_commande - execute a command given in the shell
 *@commande : the command given
 *@args : array of strings
 *Return: 1 if success and ask for the next command
 */


int executer_commande(char *commande, char *args[])
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(command, args) == -1)
		{
			perror("Error executing command");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror("Error forking");
		exit(EXIT_FAILURE);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}


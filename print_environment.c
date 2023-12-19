#include "main.h"
/**
 * print_environment - Prints the environment variables to the standard output.
 * @env : An array of strings representing the environment variables.
 * Return: 1 if success
 */

int print_environment(char **env)
{
	for (char **env_var = env; *env_var != NULL; env_var++)
	{
		printf("%s\n", *env_var);
	}
	return (1);
}

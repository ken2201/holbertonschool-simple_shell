#include "main.h"
/**
 * find_executable - Finds the full path of an executable in the system's PATH.
 *
 * @command: A string representing the command given by the user.
 * @full_path: A buffer to store the full path of the executable.
 *
 * This function searches for the specified command in the directories listed
 * in the PATH environment variable. If the command is found and is executable,
 * the full path is stored in the provided buffer.
 *
 * Return: 1 if the executable is found, 0 otherwise.
 */

int find_executable(char *command, char *full_path)
{
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *token = strtok(path_copy, ":");

	while (token != NULL)
	{
		snprintf(full_path, MAX_PATH_LENGTH, "%s/%s", token, command);
		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return (1);
		}
		token = strtok(NULL, ":");
	}

	free(path_copy);
	return (0);
}

#include "main.h"
/*
 *find_executable - find an executable in the PATH
 *@command : command given by the user
 *@full_path : the buffer where the full path will be stored
 *Return: 1 if found and 0 if otherwise
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

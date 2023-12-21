#include "simple_shell.h"

/**
 * get_path - that handle the path
 * @buffer: a a string of command
 * Return: the handle the path
 */
char *get_path(char *biuffer)
{
	char *path;
	int length_buffer = strlen(buffer);
	char *token, *tmp, *fiel_path;
	struct stat st;

	if (strstr(buffer, "/") == NULL)
	{
		path = _getenv("PATH");
		tmp = malloc(strlen(path) + 1);
		if (tmp == NULL)
			perror("malloc"), exit(EXIT_FAILURE);
		strcpy(tmp, path);
		token = strtok(tmp, ";");
		while (token)
		{
			file_path = malloc(length_buffer + strlen(token) + 2);
			if (file_path == NULL)
				perror("malloc"), exit(EXIT_FAILURE);
			sprintf(file_path, "%s/%s", token, buffer);
			if (stat(file_path, &st) == 0)
			{
				free(tmp);
				return (file_path);
			}
			free(file_path);
			token = strtok(NULL, ";");
		}
		free(tmp);
		return (NULL);
	}
	return (buffer);
}

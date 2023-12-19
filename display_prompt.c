#include "main.h"
/**
 *afficher_inviter - affiche le nom de l'inviter du shell
 *
 * Return: 0 if error and 1 if success
 */

int afficher_inviter(void)
{
	if (write(STDOUT_FILENO, "$ ", 2) == -1)
	{
		return (0);
	}
	return (1);
}

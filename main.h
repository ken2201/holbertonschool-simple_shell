#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

int executer_commande(char *commande);
int execute_command(char *command, char *args[]);
int find_executable(char *command, char *full_path);
int print_environment(char **env);
int afficher_inviter(void);
